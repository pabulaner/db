for (uint64_t perfRepeat3 = 0; perfRepeat3 != 1; perfRepeat3++){ //371; void produceAndPrint(std::unique_ptr<Operator>, const std::vector<IU*>&, unsigned int, uint64_t, int64_t)
int64_t row4 = 0;
cerr << "count: " << db.warehouse.count() << endl;
cerr << "count: " << db.warehouse.count() << endl;

db.warehouse.scan({}, [&](auto key, auto record){ //258; Scan::produce(const IUSet&, ConsumerFn)::<lambda()>
std::cerr << "Producing stuff..." << std::endl;
auto o_c_id1 = record.w_ytd;
auto o_carrier_id2 = record.w_tax;
if (row4 >= 0){ //381; produceAndPrint(std::unique_ptr<Operator>, const std::vector<IU*>&, unsigned int, uint64_t, int64_t)::<lambda()>::<lambda()>
cerr << o_c_id1 << " ";cerr << o_carrier_id2 << " ";cerr << endl;
}
row4++;return true;}
, [](){});
}
