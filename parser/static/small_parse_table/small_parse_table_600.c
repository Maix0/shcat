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
	v->a[60000] = aux_sym_concatenation_token1;
	v->a[60001] = actions(1997);
	v->a[60002] = 1;
	v->a[60003] = sym__concat;
	v->a[60004] = state(899);
	v->a[60005] = 1;
	v->a[60006] = aux_sym_concatenation_repeat1;
	v->a[60007] = actions(1047);
	v->a[60008] = 3;
	v->a[60009] = sym_file_descriptor;
	v->a[60010] = sym_variable_name;
	v->a[60011] = aux_sym_heredoc_redirect_token1;
	v->a[60012] = actions(1043);
	v->a[60013] = 15;
	v->a[60014] = anon_sym_PIPE;
	v->a[60015] = anon_sym_SEMI_SEMI;
	v->a[60016] = anon_sym_AMP_AMP;
	v->a[60017] = anon_sym_PIPE_PIPE;
	v->a[60018] = anon_sym_LT;
	v->a[60019] = anon_sym_GT;
	small_parse_table_3001(v);
}

void	small_parse_table_3001(t_small_parse_table_array *v)
{
	v->a[60020] = anon_sym_GT_GT;
	v->a[60021] = anon_sym_LT_AMP;
	v->a[60022] = anon_sym_GT_AMP;
	v->a[60023] = anon_sym_GT_PIPE;
	v->a[60024] = anon_sym_LT_GT;
	v->a[60025] = anon_sym_LT_LT;
	v->a[60026] = anon_sym_LT_LT_DASH;
	v->a[60027] = anon_sym_AMP;
	v->a[60028] = anon_sym_SEMI;
	v->a[60029] = 15;
	v->a[60030] = actions(3);
	v->a[60031] = 1;
	v->a[60032] = sym_comment;
	v->a[60033] = actions(1634);
	v->a[60034] = 1;
	v->a[60035] = anon_sym_LPAREN;
	v->a[60036] = actions(1638);
	v->a[60037] = 1;
	v->a[60038] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60039] = actions(1640);
	small_parse_table_3002(v);
}

void	small_parse_table_3002(t_small_parse_table_array *v)
{
	v->a[60040] = 1;
	v->a[60041] = anon_sym_DOLLAR;
	v->a[60042] = actions(1642);
	v->a[60043] = 1;
	v->a[60044] = anon_sym_DQUOTE;
	v->a[60045] = actions(1644);
	v->a[60046] = 1;
	v->a[60047] = anon_sym_DOLLAR_LBRACE;
	v->a[60048] = actions(1646);
	v->a[60049] = 1;
	v->a[60050] = anon_sym_DOLLAR_LPAREN;
	v->a[60051] = actions(1648);
	v->a[60052] = 1;
	v->a[60053] = anon_sym_BQUOTE;
	v->a[60054] = actions(1650);
	v->a[60055] = 1;
	v->a[60056] = sym_extglob_pattern;
	v->a[60057] = state(1139);
	v->a[60058] = 1;
	v->a[60059] = aux_sym_case_statement_repeat1;
	small_parse_table_3003(v);
}

void	small_parse_table_3003(t_small_parse_table_array *v)
{
	v->a[60060] = state(1713);
	v->a[60061] = 1;
	v->a[60062] = sym_case_item;
	v->a[60063] = state(1945);
	v->a[60064] = 1;
	v->a[60065] = sym__case_item_last;
	v->a[60066] = state(1871);
	v->a[60067] = 2;
	v->a[60068] = sym_concatenation;
	v->a[60069] = sym__extglob_blob;
	v->a[60070] = actions(1630);
	v->a[60071] = 3;
	v->a[60072] = sym_raw_string;
	v->a[60073] = sym_number;
	v->a[60074] = sym_word;
	v->a[60075] = state(1804);
	v->a[60076] = 5;
	v->a[60077] = sym_arithmetic_expansion;
	v->a[60078] = sym_string;
	v->a[60079] = sym_simple_expansion;
	small_parse_table_3004(v);
}

void	small_parse_table_3004(t_small_parse_table_array *v)
{
	v->a[60080] = sym_expansion;
	v->a[60081] = sym_command_substitution;
	v->a[60082] = 15;
	v->a[60083] = actions(3);
	v->a[60084] = 1;
	v->a[60085] = sym_comment;
	v->a[60086] = actions(1634);
	v->a[60087] = 1;
	v->a[60088] = anon_sym_LPAREN;
	v->a[60089] = actions(1638);
	v->a[60090] = 1;
	v->a[60091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60092] = actions(1640);
	v->a[60093] = 1;
	v->a[60094] = anon_sym_DOLLAR;
	v->a[60095] = actions(1642);
	v->a[60096] = 1;
	v->a[60097] = anon_sym_DQUOTE;
	v->a[60098] = actions(1644);
	v->a[60099] = 1;
	small_parse_table_3005(v);
}

/* EOF small_parse_table_600.c */
