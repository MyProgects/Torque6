//-----------------------------------------------------------------------------
// Copyright (c) 2015 Andrew Mac
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//-----------------------------------------------------------------------------

#ifndef _MULTIPLY_NODE_H_
#define _MULTIPLY_NODE_H_

#ifndef _ASSET_PTR_H_
#include "assets/assetPtr.h"
#endif

#ifndef _ROOT_NODE_H_
#include "rootNode.h"
#endif

namespace Materials
{
   class DLL_PUBLIC MultiplyNode : public BaseNode
   {
      private:
         typedef BaseNode Parent;

      public:
         StringTableEntry mInputASrc;
         StringTableEntry mInputBSrc;

         MultiplyNode();

         virtual void generateVertex(const MaterialGenerationSettings &settings, ReturnType refType = ReturnName, U32 flags = 0);
         virtual const char* getVertexReference(const MaterialGenerationSettings &settings, ReturnType refType, U32 flags = 0);

         virtual void generatePixel(const MaterialGenerationSettings &settings, ReturnType refType = ReturnName, U32 flags = 0);
         virtual const char* getPixelReference(const MaterialGenerationSettings &settings, ReturnType refType, U32 flags = 0);

         static void initPersistFields();

         DECLARE_CONOBJECT(MultiplyNode);
   };
}

#endif _MULTIPLY_NODE_H_