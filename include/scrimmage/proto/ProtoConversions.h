/*!
 * @file
 *
 * @section LICENSE
 *
 * Copyright (C) 2017 by the Georgia Tech Research Institute (GTRI)
 *
 * This file is part of SCRIMMAGE.
 *
 *   SCRIMMAGE is free software: you can redistribute it and/or modify it under
 *   the terms of the GNU Lesser General Public License as published by the
 *   Free Software Foundation, either version 3 of the License, or (at your
 *   option) any later version.
 *
 *   SCRIMMAGE is distributed in the hope that it will be useful, but WITHOUT
 *   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 *   License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with SCRIMMAGE.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @author Kevin DeMarco <kevin.demarco@gtri.gatech.edu>
 * @author Eric Squires <eric.squires@gtri.gatech.edu>
 * @date 31 July 2017
 * @version 0.1.0
 * @brief Brief file description.
 * @section DESCRIPTION
 * A Long description goes here.
 *
 */

#ifndef INCLUDE_SCRIMMAGE_PROTO_PROTOCONVERSIONS_H_
#define INCLUDE_SCRIMMAGE_PROTO_PROTOCONVERSIONS_H_

#include <Eigen/Dense>

#include <list>
#include <vector>

namespace scrimmage_proto {
class Contact;
class Vector3d;

class Shape;
using ShapePtr = std::shared_ptr<Shape>;

class Quaternion;
class ID;
class Color;
class State;
class Frame;
} // namespace scrimmage_proto

namespace scrimmage {

class Color_t;
class ID;
class Quaternion;
class Frame;

void set(scrimmage_proto::Vector3d *dst, Eigen::Vector3d src);
void set(scrimmage_proto::Vector3d *dst, double x, double y, double z);
void set(scrimmage_proto::Color *dst, const std::vector<int> &src);
void set(scrimmage_proto::Color &dst, const scrimmage_proto::Color &src);
void set(Eigen::Vector3d &dst, const scrimmage_proto::Vector3d *src);
void set(scrimmage_proto::Color &dst, scrimmage_proto::Color &src);
void set(scrimmage_proto::Color &dst, int r, int g, int b);
void set(scrimmage_proto::Color *dst, scrimmage_proto::Color *src);
void set(scrimmage_proto::Color *dst, scrimmage_proto::Color src);
void set(scrimmage_proto::Color *dst, const scrimmage::Color_t &src);
void set(scrimmage_proto::Color *color, int r, int g, int b);
void set(scrimmage_proto::Color *color, int grayscale);
void set(scrimmage_proto::Quaternion *dst, Quaternion &src);

Eigen::Vector3d eigen(const scrimmage_proto::Vector3d &src);

void add_point_color(std::shared_ptr<scrimmage_proto::Shape> s, const scrimmage::Color_t &c);
void add_point_color(scrimmage_proto::ShapePtr s, int r, int g, int b);
void add_point_color(scrimmage_proto::ShapePtr s, int grayscale);

ID proto_2_id(const scrimmage_proto::ID &proto_id);
Quaternion proto_2_quat(scrimmage_proto::Quaternion proto_quat);
Eigen::Vector3d proto_2_vector3d(scrimmage_proto::Vector3d proto_vector3d);

StatePtr proto_2_state(const scrimmage_proto::State &proto_state);

Contact proto_2_contact(const scrimmage_proto::Contact &proto_contact);

Frame proto_2_frame(const scrimmage_proto::Frame &proto_frame);

std::shared_ptr<scrimmage_proto::Frame>
create_frame(double time, std::shared_ptr<ContactMap> &contacts);

} // namespace scrimmage
#endif // INCLUDE_SCRIMMAGE_PROTO_PROTOCONVERSIONS_H_
