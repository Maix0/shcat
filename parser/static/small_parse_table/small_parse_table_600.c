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
	v->a[60000] = sym_file_descriptor;
	v->a[60001] = sym__concat;
	v->a[60002] = sym_variable_name;
	v->a[60003] = actions(1122);
	v->a[60004] = 25;
	v->a[60005] = anon_sym_PIPE;
	v->a[60006] = anon_sym_AMP_AMP;
	v->a[60007] = anon_sym_PIPE_PIPE;
	v->a[60008] = anon_sym_LT;
	v->a[60009] = anon_sym_GT;
	v->a[60010] = anon_sym_GT_GT;
	v->a[60011] = anon_sym_AMP_GT;
	v->a[60012] = anon_sym_AMP_GT_GT;
	v->a[60013] = anon_sym_LT_AMP;
	v->a[60014] = anon_sym_GT_AMP;
	v->a[60015] = anon_sym_GT_PIPE;
	v->a[60016] = anon_sym_LT_AMP_DASH;
	v->a[60017] = anon_sym_GT_AMP_DASH;
	v->a[60018] = anon_sym_LT_LT;
	v->a[60019] = anon_sym_LT_LT_DASH;
	small_parse_table_3001(v);
}

void	small_parse_table_3001(t_small_parse_table_array *v)
{
	v->a[60020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60021] = aux_sym_concatenation_token1;
	v->a[60022] = anon_sym_DOLLAR;
	v->a[60023] = anon_sym_DQUOTE;
	v->a[60024] = sym_raw_string;
	v->a[60025] = sym_number;
	v->a[60026] = anon_sym_DOLLAR_LBRACE;
	v->a[60027] = anon_sym_DOLLAR_LPAREN;
	v->a[60028] = anon_sym_BQUOTE;
	v->a[60029] = sym_word;
	v->a[60030] = 3;
	v->a[60031] = actions(3);
	v->a[60032] = 1;
	v->a[60033] = sym_comment;
	v->a[60034] = actions(1147);
	v->a[60035] = 3;
	v->a[60036] = sym_file_descriptor;
	v->a[60037] = sym__concat;
	v->a[60038] = sym__bare_dollar;
	v->a[60039] = actions(1149);
	small_parse_table_3002(v);
}

void	small_parse_table_3002(t_small_parse_table_array *v)
{
	v->a[60040] = 25;
	v->a[60041] = anon_sym_PIPE;
	v->a[60042] = anon_sym_AMP_AMP;
	v->a[60043] = anon_sym_PIPE_PIPE;
	v->a[60044] = anon_sym_LT;
	v->a[60045] = anon_sym_GT;
	v->a[60046] = anon_sym_GT_GT;
	v->a[60047] = anon_sym_AMP_GT;
	v->a[60048] = anon_sym_AMP_GT_GT;
	v->a[60049] = anon_sym_LT_AMP;
	v->a[60050] = anon_sym_GT_AMP;
	v->a[60051] = anon_sym_GT_PIPE;
	v->a[60052] = anon_sym_LT_AMP_DASH;
	v->a[60053] = anon_sym_GT_AMP_DASH;
	v->a[60054] = anon_sym_LT_LT;
	v->a[60055] = anon_sym_LT_LT_DASH;
	v->a[60056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60057] = aux_sym_concatenation_token1;
	v->a[60058] = anon_sym_DOLLAR;
	v->a[60059] = anon_sym_DQUOTE;
	small_parse_table_3003(v);
}

void	small_parse_table_3003(t_small_parse_table_array *v)
{
	v->a[60060] = sym_raw_string;
	v->a[60061] = sym_number;
	v->a[60062] = anon_sym_DOLLAR_LBRACE;
	v->a[60063] = anon_sym_DOLLAR_LPAREN;
	v->a[60064] = anon_sym_BQUOTE;
	v->a[60065] = sym_word;
	v->a[60066] = 3;
	v->a[60067] = actions(3);
	v->a[60068] = 1;
	v->a[60069] = sym_comment;
	v->a[60070] = actions(1187);
	v->a[60071] = 3;
	v->a[60072] = sym_file_descriptor;
	v->a[60073] = sym__concat;
	v->a[60074] = sym__bare_dollar;
	v->a[60075] = actions(1185);
	v->a[60076] = 25;
	v->a[60077] = anon_sym_PIPE;
	v->a[60078] = anon_sym_AMP_AMP;
	v->a[60079] = anon_sym_PIPE_PIPE;
	small_parse_table_3004(v);
}

void	small_parse_table_3004(t_small_parse_table_array *v)
{
	v->a[60080] = anon_sym_LT;
	v->a[60081] = anon_sym_GT;
	v->a[60082] = anon_sym_GT_GT;
	v->a[60083] = anon_sym_AMP_GT;
	v->a[60084] = anon_sym_AMP_GT_GT;
	v->a[60085] = anon_sym_LT_AMP;
	v->a[60086] = anon_sym_GT_AMP;
	v->a[60087] = anon_sym_GT_PIPE;
	v->a[60088] = anon_sym_LT_AMP_DASH;
	v->a[60089] = anon_sym_GT_AMP_DASH;
	v->a[60090] = anon_sym_LT_LT;
	v->a[60091] = anon_sym_LT_LT_DASH;
	v->a[60092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60093] = aux_sym_concatenation_token1;
	v->a[60094] = anon_sym_DOLLAR;
	v->a[60095] = anon_sym_DQUOTE;
	v->a[60096] = sym_raw_string;
	v->a[60097] = sym_number;
	v->a[60098] = anon_sym_DOLLAR_LBRACE;
	v->a[60099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3005(v);
}

/* EOF small_parse_table_600.c */
