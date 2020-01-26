#pragma once

namespace dolfinx
{
/*! \namespace dolfinx::graph
    \brief Graph data structures and algorithms

    Data structures for building and representing graphs, and algorithms on
   graphs, e.g., re-ordering and partitioning.
*/
}

// DOLFINX graph interface

#include <dolfinx/graph/BoostGraphOrdering.h>
#include <dolfinx/graph/Graph.h>
#include <dolfinx/graph/GraphBuilder.h>
