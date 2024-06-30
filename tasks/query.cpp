for (uint64_t perfRepeat3 = 0; perfRepeat3 != 1; perfRepeat3++){ //371; void produceAndPrint(std::unique_ptr<Operator>, const std::vector<IU*>&, unsigned int, uint64_t, int64_t)
int64_t row4 = 0;
for (uint64_t i = 0; i != db.order.count(); i++){ //257; virtual void Scan::produce(const IUSet&, ConsumerFn)
db.order.scan({i}, [&](auto key, auto record){ //258; Scan::produce(const IUSet&, ConsumerFn)::<lambda()>
std::cerr << "Producing stuff..." << std::endl;auto o_c_id1 = record.o_c_id;
auto o_carrier_id2 = record.o_carrier_id;
if (row4 >= 0){ //381; produceAndPrint(std::unique_ptr<Operator>, const std::vector<IU*>&, unsigned int, uint64_t, int64_t)::<lambda()>::<lambda()>
cerr << o_c_id1 << " ";cerr << o_carrier_id2 << " ";cerr << endl;
}
row4++;return true;}
, [](){}); 
}
}
