#ifndef IO_H
#define IO_H

#include "common_include.h"
#include "io/ac_type.h"
#include "point_cloud.h"

namespace pc {
  void readACToPointCloud(const std::string& filename, pc::PointCloud& pc);
  void ReadASC_xyz(const std::string& filename, pc::PointCloud& pc);
  void writePCFileAscii(const std::string& filename, pc::PointCloud& pc);
}

#endif
