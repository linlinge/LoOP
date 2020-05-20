#include <iostream>	
#include "PCLExtend.h"
#include "DataMining.h"
#include <Eigen/Dense>
#include <omp.h>

int main(int argc,char** argv)
{
	pcl::PointCloud<PointType>::Ptr cloud(new pcl::PointCloud<PointType>);	
	if (pcl::io::loadPLYFile<PointType>(argv[1], *cloud) == -1){
		PCL_ERROR("Couldn't read file test_pcd.pcd \n");
		return (-1);
	}
	DataMining dm(cloud);
	dm.LOOP();
	return 0;
}
