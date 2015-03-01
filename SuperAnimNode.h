/* sumator.h */
#ifndef SUPER_ANIM_NODE_H
#define SUPER_ANIM_NODE_H

#include "scene/2d/node_2d.h"
#include "SuperAnimResource.h"

class SuperAnimNode : public Node2D, public SuperAnim::SuperAnimHandler {
    OBJ_TYPE(SuperAnimNode, Node2D);

    int count;
    Color myColor;

    protected:
    static void _bind_methods();
    
    public:

    //functions to expose
    void add(int value);
    void reset();
    int get_total() const;

    float get_width();
    float get_height();

    //load the resource string and get the corresponding handle.
    void load_anim(String resPath);

    //function for handling callbacks for engine events.
    void _notification(int p_what);
        
    SuperAnimNode();
};

#endif