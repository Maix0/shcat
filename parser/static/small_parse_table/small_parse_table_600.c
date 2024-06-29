/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_600.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3000(t_small_parse_table_array *v)
{
	v->a[60000] = anon_sym_DOLLAR_LPAREN;
	v->a[60001] = anon_sym_BQUOTE;
	v->a[60002] = sym_word;
	v->a[60003] = 3;
	v->a[60004] = actions(3);
	v->a[60005] = 1;
	v->a[60006] = sym_comment;
	v->a[60007] = actions(538);
	v->a[60008] = 2;
	v->a[60009] = sym_file_descriptor;
	v->a[60010] = sym_variable_name;
	v->a[60011] = actions(540);
	v->a[60012] = 24;
	v->a[60013] = anon_sym_PIPE;
	v->a[60014] = anon_sym_AMP_AMP;
	v->a[60015] = anon_sym_PIPE_PIPE;
	v->a[60016] = anon_sym_LT;
	v->a[60017] = anon_sym_GT;
	v->a[60018] = anon_sym_GT_GT;
	v->a[60019] = anon_sym_AMP_GT;
	small_parse_table_3001(v);
}

void	small_parse_table_3001(t_small_parse_table_array *v)
{
	v->a[60020] = anon_sym_AMP_GT_GT;
	v->a[60021] = anon_sym_LT_AMP;
	v->a[60022] = anon_sym_GT_AMP;
	v->a[60023] = anon_sym_GT_PIPE;
	v->a[60024] = anon_sym_LT_AMP_DASH;
	v->a[60025] = anon_sym_GT_AMP_DASH;
	v->a[60026] = anon_sym_LT_LT;
	v->a[60027] = anon_sym_LT_LT_DASH;
	v->a[60028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60029] = anon_sym_DOLLAR;
	v->a[60030] = anon_sym_DQUOTE;
	v->a[60031] = sym_raw_string;
	v->a[60032] = sym_number;
	v->a[60033] = anon_sym_DOLLAR_LBRACE;
	v->a[60034] = anon_sym_DOLLAR_LPAREN;
	v->a[60035] = anon_sym_BQUOTE;
	v->a[60036] = sym_word;
	v->a[60037] = 3;
	v->a[60038] = actions(3);
	v->a[60039] = 1;
	small_parse_table_3002(v);
}

void	small_parse_table_3002(t_small_parse_table_array *v)
{
	v->a[60040] = sym_comment;
	v->a[60041] = actions(1094);
	v->a[60042] = 2;
	v->a[60043] = sym_file_descriptor;
	v->a[60044] = sym_variable_name;
	v->a[60045] = actions(1090);
	v->a[60046] = 24;
	v->a[60047] = anon_sym_PIPE;
	v->a[60048] = anon_sym_AMP_AMP;
	v->a[60049] = anon_sym_PIPE_PIPE;
	v->a[60050] = anon_sym_LT;
	v->a[60051] = anon_sym_GT;
	v->a[60052] = anon_sym_GT_GT;
	v->a[60053] = anon_sym_AMP_GT;
	v->a[60054] = anon_sym_AMP_GT_GT;
	v->a[60055] = anon_sym_LT_AMP;
	v->a[60056] = anon_sym_GT_AMP;
	v->a[60057] = anon_sym_GT_PIPE;
	v->a[60058] = anon_sym_LT_AMP_DASH;
	v->a[60059] = anon_sym_GT_AMP_DASH;
	small_parse_table_3003(v);
}

void	small_parse_table_3003(t_small_parse_table_array *v)
{
	v->a[60060] = anon_sym_LT_LT;
	v->a[60061] = anon_sym_LT_LT_DASH;
	v->a[60062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60063] = anon_sym_DOLLAR;
	v->a[60064] = anon_sym_DQUOTE;
	v->a[60065] = sym_raw_string;
	v->a[60066] = sym_number;
	v->a[60067] = anon_sym_DOLLAR_LBRACE;
	v->a[60068] = anon_sym_DOLLAR_LPAREN;
	v->a[60069] = anon_sym_BQUOTE;
	v->a[60070] = sym_word;
	v->a[60071] = 15;
	v->a[60072] = actions(1074);
	v->a[60073] = 1;
	v->a[60074] = sym_comment;
	v->a[60075] = actions(1831);
	v->a[60076] = 1;
	v->a[60077] = anon_sym_LPAREN;
	v->a[60078] = actions(1833);
	v->a[60079] = 1;
	small_parse_table_3004(v);
}

void	small_parse_table_3004(t_small_parse_table_array *v)
{
	v->a[60080] = anon_sym_BANG;
	v->a[60081] = actions(1841);
	v->a[60082] = 1;
	v->a[60083] = anon_sym_TILDE;
	v->a[60084] = actions(1843);
	v->a[60085] = 1;
	v->a[60086] = anon_sym_DOLLAR;
	v->a[60087] = actions(1845);
	v->a[60088] = 1;
	v->a[60089] = anon_sym_DQUOTE;
	v->a[60090] = actions(1849);
	v->a[60091] = 1;
	v->a[60092] = anon_sym_DOLLAR_LBRACE;
	v->a[60093] = actions(1851);
	v->a[60094] = 1;
	v->a[60095] = anon_sym_DOLLAR_LPAREN;
	v->a[60096] = actions(1853);
	v->a[60097] = 1;
	v->a[60098] = anon_sym_BQUOTE;
	v->a[60099] = actions(1855);
	small_parse_table_3005(v);
}

/* EOF small_parse_table_600.c */
