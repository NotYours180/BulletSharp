#pragma once

#include "SoftBodySolver.h"

namespace BulletSharp
{
	namespace MultiThreaded
	{
		public ref class CpuSoftBodySolver : SoftBody::SoftBodySolver
		{
		public:
			CpuSoftBodySolver();

		internal:
			property btCPUSoftBodySolver* UnmanagedPointer
			{
				btCPUSoftBodySolver* get() new;
			}
		};
	};
};

