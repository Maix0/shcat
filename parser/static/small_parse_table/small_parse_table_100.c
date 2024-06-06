/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_100.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_500(t_small_parse_table_array *v)
{
	v->a[10000] = actions(1693);
	v->a[10001] = 2;
	v->a[10002] = anon_sym_SEMI_AMP;
	v->a[10003] = anon_sym_SEMI_SEMI_AMP;
	v->a[10004] = actions(1695);
	v->a[10005] = 2;
	v->a[10006] = anon_sym_esac;
	v->a[10007] = anon_sym_SEMI_SEMI;
	v->a[10008] = actions(1691);
	v->a[10009] = 17;
	v->a[10010] = sym_file_descriptor;
	v->a[10011] = sym_variable_name;
	v->a[10012] = sym_test_operator;
	v->a[10013] = sym__brace_start;
	v->a[10014] = anon_sym_LPAREN;
	v->a[10015] = anon_sym_LBRACE;
	v->a[10016] = anon_sym_GT_GT;
	v->a[10017] = anon_sym_AMP_GT_GT;
	v->a[10018] = anon_sym_GT_PIPE;
	v->a[10019] = anon_sym_LT_AMP_DASH;
	small_parse_table_501(v);
}

void	small_parse_table_501(t_small_parse_table_array *v)
{
	v->a[10020] = anon_sym_GT_AMP_DASH;
	v->a[10021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10022] = anon_sym_DQUOTE;
	v->a[10023] = sym_raw_string;
	v->a[10024] = anon_sym_DOLLAR_LBRACE;
	v->a[10025] = anon_sym_BQUOTE;
	v->a[10026] = anon_sym_DOLLAR_BQUOTE;
	v->a[10027] = actions(1689);
	v->a[10028] = 26;
	v->a[10029] = anon_sym_for;
	v->a[10030] = anon_sym_select;
	v->a[10031] = anon_sym_while;
	v->a[10032] = anon_sym_until;
	v->a[10033] = anon_sym_if;
	v->a[10034] = anon_sym_case;
	v->a[10035] = anon_sym_function;
	v->a[10036] = anon_sym_BANG;
	v->a[10037] = anon_sym_declare;
	v->a[10038] = anon_sym_typeset;
	v->a[10039] = anon_sym_export;
	small_parse_table_502(v);
}

void	small_parse_table_502(t_small_parse_table_array *v)
{
	v->a[10040] = anon_sym_readonly;
	v->a[10041] = anon_sym_local;
	v->a[10042] = anon_sym_unset;
	v->a[10043] = anon_sym_unsetenv;
	v->a[10044] = anon_sym_LT;
	v->a[10045] = anon_sym_GT;
	v->a[10046] = anon_sym_AMP_GT;
	v->a[10047] = anon_sym_LT_AMP;
	v->a[10048] = anon_sym_GT_AMP;
	v->a[10049] = anon_sym_DOLLAR;
	v->a[10050] = sym__special_character;
	v->a[10051] = aux_sym_number_token1;
	v->a[10052] = aux_sym_number_token2;
	v->a[10053] = anon_sym_DOLLAR_LPAREN;
	v->a[10054] = sym_word;
	v->a[10055] = 21;
	v->a[10056] = actions(3);
	v->a[10057] = 1;
	v->a[10058] = sym_comment;
	v->a[10059] = actions(1252);
	small_parse_table_503(v);
}

void	small_parse_table_503(t_small_parse_table_array *v)
{
	v->a[10060] = 1;
	v->a[10061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10062] = actions(1254);
	v->a[10063] = 1;
	v->a[10064] = anon_sym_DOLLAR;
	v->a[10065] = actions(1256);
	v->a[10066] = 1;
	v->a[10067] = sym__special_character;
	v->a[10068] = actions(1258);
	v->a[10069] = 1;
	v->a[10070] = anon_sym_DQUOTE;
	v->a[10071] = actions(1260);
	v->a[10072] = 1;
	v->a[10073] = aux_sym_number_token1;
	v->a[10074] = actions(1262);
	v->a[10075] = 1;
	v->a[10076] = aux_sym_number_token2;
	v->a[10077] = actions(1264);
	v->a[10078] = 1;
	v->a[10079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_504(v);
}

void	small_parse_table_504(t_small_parse_table_array *v)
{
	v->a[10080] = actions(1266);
	v->a[10081] = 1;
	v->a[10082] = anon_sym_DOLLAR_LPAREN;
	v->a[10083] = actions(1268);
	v->a[10084] = 1;
	v->a[10085] = anon_sym_BQUOTE;
	v->a[10086] = actions(1270);
	v->a[10087] = 1;
	v->a[10088] = anon_sym_DOLLAR_BQUOTE;
	v->a[10089] = actions(1272);
	v->a[10090] = 1;
	v->a[10091] = sym_test_operator;
	v->a[10092] = actions(1274);
	v->a[10093] = 1;
	v->a[10094] = sym__bare_dollar;
	v->a[10095] = actions(1276);
	v->a[10096] = 1;
	v->a[10097] = sym__brace_start;
	v->a[10098] = state(390);
	v->a[10099] = 1;
	small_parse_table_505(v);
}

/* EOF small_parse_table_100.c */
