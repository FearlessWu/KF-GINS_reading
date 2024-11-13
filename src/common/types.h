/*
 * OB_GINS: An Optimization-Based GNSS/INS Integrated Navigation System
 *
 * Copyright (C) 2022 i2Nav Group, Wuhan University
 *
 *     Author : Hailiang Tang
 *    Contact : thl@whu.edu.cn
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef TYPES_H
#define TYPES_H

#include <Eigen/Geometry>

using Eigen::Matrix3d;
using Eigen::Quaterniond;
using Eigen::Vector3d;

typedef struct GNSS {
    double time;

    Vector3d blh; // 大地坐标 rad
    Vector3d std; // 大地坐标误差m
    Vector3d nedvel; // NED速度 m/s

    bool isvalid;
} GNSS;

typedef struct IMU {
    double time;
    double dt;

    Vector3d dtheta;    // 转过的角度
    Vector3d dvel;      // 速度
    Vector3d a;         // 加速度 m/s
    Vector3d w;         // 角速度 rad/s
    double odovel;
} IMU;

typedef struct Pose {
    Matrix3d R;
    Vector3d t;
} Pose;

#endif // TYPES_H
