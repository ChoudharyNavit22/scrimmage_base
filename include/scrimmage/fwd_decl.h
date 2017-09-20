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

#ifndef INCLUDE_SCRIMMAGE_FWD_DECL_H_
#define INCLUDE_SCRIMMAGE_FWD_DECL_H_

#include <memory>
#include <unordered_map>

namespace GeographicLib {
class LocalCartesian;
using LocalCartesianPtr = std::shared_ptr<LocalCartesian>;
}

namespace scrimmage {

class Autonomy;
using AutonomyPtr = std::shared_ptr<Autonomy>;

class State;
using StatePtr = std::shared_ptr<State>;

class Random;
using RandomPtr = std::shared_ptr<Random>;

class Sensable;
using SensablePtr = std::shared_ptr<Sensable>;

class Contact;
using ContactMap = std::unordered_map<int, Contact>;
using ContactMapPtr = std::shared_ptr<ContactMap>;

class Entity;
using EntityPtr = std::shared_ptr<Entity>;

class Network;
using NetworkPtr = std::shared_ptr<Network>;

class NetworkDevice;
using NetworkDevicePtr = std::shared_ptr<NetworkDevice>;

class Publisher;
using PublisherPtr = std::shared_ptr<Publisher>;

class Subscriber;
using SubscriberPtr = std::shared_ptr<Subscriber>;

class MessageBase;
using MessageBasePtr = std::shared_ptr<MessageBase>;

template <class T>
class Message;

template <class T>
using MessagePtr = std::shared_ptr<Message<T>>;
class RTree;
using RTreePtr = std::shared_ptr<RTree>;

class Plugin;
using PluginPtr = std::shared_ptr<Plugin>;

class PluginManager;
using PluginManagerPtr = std::shared_ptr<PluginManager>;

class MissionParse;
using MissionParsePtr = std::shared_ptr<MissionParse>;

class MotionModel;
using MotionModelPtr = std::shared_ptr<MotionModel>;

class Controller;
using ControllerPtr = std::shared_ptr<Controller>;

class Sensor;
using SensorPtr = std::shared_ptr<Sensor>;

class Log;

class Interface;
using InterfacePtr = std::shared_ptr<Interface>;

class EntityInteraction;
using EntityInteractionPtr = std::shared_ptr<EntityInteraction>;

class Metrics;
using MetricsPtr = std::shared_ptr<Metrics>;

class CameraInterface;
} // namespace scrimmage

#endif // INCLUDE_SCRIMMAGE_FWD_DECL_H_
