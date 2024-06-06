/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_10.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_50(t_small_parse_table_array *v)
{
	v->a[1000] = sym_number;
	v->a[1001] = sym_simple_expansion;
	v->a[1002] = sym_expansion;
	v->a[1003] = sym_command_substitution;
	v->a[1004] = actions(691);
	v->a[1005] = 21;
	v->a[1006] = anon_sym_PIPE;
	v->a[1007] = anon_sym_SEMI_SEMI;
	v->a[1008] = anon_sym_SEMI_AMP;
	v->a[1009] = anon_sym_SEMI_SEMI_AMP;
	v->a[1010] = anon_sym_PIPE_AMP;
	v->a[1011] = anon_sym_AMP_AMP;
	v->a[1012] = anon_sym_PIPE_PIPE;
	v->a[1013] = anon_sym_LT;
	v->a[1014] = anon_sym_GT;
	v->a[1015] = anon_sym_GT_GT;
	v->a[1016] = anon_sym_AMP_GT;
	v->a[1017] = anon_sym_AMP_GT_GT;
	v->a[1018] = anon_sym_LT_AMP;
	v->a[1019] = anon_sym_GT_AMP;
	small_parse_table_51(v);
}

void	small_parse_table_51(t_small_parse_table_array *v)
{
	v->a[1020] = anon_sym_GT_PIPE;
	v->a[1021] = anon_sym_LT_AMP_DASH;
	v->a[1022] = anon_sym_GT_AMP_DASH;
	v->a[1023] = anon_sym_LT_LT;
	v->a[1024] = anon_sym_LT_LT_DASH;
	v->a[1025] = anon_sym_AMP;
	v->a[1026] = anon_sym_SEMI;
	v->a[1027] = 23;
	v->a[1028] = actions(3);
	v->a[1029] = 1;
	v->a[1030] = sym_comment;
	v->a[1031] = actions(919);
	v->a[1032] = 1;
	v->a[1033] = anon_sym_LPAREN;
	v->a[1034] = actions(921);
	v->a[1035] = 1;
	v->a[1036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1037] = actions(923);
	v->a[1038] = 1;
	v->a[1039] = anon_sym_DOLLAR;
	small_parse_table_52(v);
}

void	small_parse_table_52(t_small_parse_table_array *v)
{
	v->a[1040] = actions(925);
	v->a[1041] = 1;
	v->a[1042] = sym__special_character;
	v->a[1043] = actions(927);
	v->a[1044] = 1;
	v->a[1045] = anon_sym_DQUOTE;
	v->a[1046] = actions(929);
	v->a[1047] = 1;
	v->a[1048] = aux_sym_number_token1;
	v->a[1049] = actions(931);
	v->a[1050] = 1;
	v->a[1051] = aux_sym_number_token2;
	v->a[1052] = actions(933);
	v->a[1053] = 1;
	v->a[1054] = anon_sym_DOLLAR_LBRACE;
	v->a[1055] = actions(935);
	v->a[1056] = 1;
	v->a[1057] = anon_sym_DOLLAR_LPAREN;
	v->a[1058] = actions(937);
	v->a[1059] = 1;
	small_parse_table_53(v);
}

void	small_parse_table_53(t_small_parse_table_array *v)
{
	v->a[1060] = anon_sym_BQUOTE;
	v->a[1061] = actions(939);
	v->a[1062] = 1;
	v->a[1063] = anon_sym_DOLLAR_BQUOTE;
	v->a[1064] = actions(941);
	v->a[1065] = 1;
	v->a[1066] = sym_test_operator;
	v->a[1067] = actions(943);
	v->a[1068] = 1;
	v->a[1069] = sym__bare_dollar;
	v->a[1070] = actions(945);
	v->a[1071] = 1;
	v->a[1072] = sym__brace_start;
	v->a[1073] = state(326);
	v->a[1074] = 1;
	v->a[1075] = aux_sym_command_repeat2;
	v->a[1076] = state(1039);
	v->a[1077] = 1;
	v->a[1078] = aux_sym__literal_repeat1;
	v->a[1079] = state(1193);
	small_parse_table_54(v);
}

void	small_parse_table_54(t_small_parse_table_array *v)
{
	v->a[1080] = 1;
	v->a[1081] = sym_concatenation;
	v->a[1082] = state(2332);
	v->a[1083] = 1;
	v->a[1084] = sym_subshell;
	v->a[1085] = actions(759);
	v->a[1086] = 2;
	v->a[1087] = sym_file_descriptor;
	v->a[1088] = aux_sym_heredoc_redirect_token1;
	v->a[1089] = actions(917);
	v->a[1090] = 2;
	v->a[1091] = sym_raw_string;
	v->a[1092] = sym_word;
	v->a[1093] = state(692);
	v->a[1094] = 7;
	v->a[1095] = sym_arithmetic_expansion;
	v->a[1096] = sym_brace_expression;
	v->a[1097] = sym_string;
	v->a[1098] = sym_number;
	v->a[1099] = sym_simple_expansion;
	small_parse_table_55(v);
}

/* EOF small_parse_table_10.c */
