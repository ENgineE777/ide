/**
 * @ingroup gr_callback
 */
class Callback
{
typedef void (*CallbackWOP)();
typedef void (*Callback1I)(int);
typedef void (*Callback1F)(float);
typedef void (*Callback1S)(string&in);
typedef void (*Callback1I1S)(int, string&in);
typedef void (*Callback1I2S)(int, string&in, string&in);
typedef void (*Callback1I2F)(int, float, float);
};
