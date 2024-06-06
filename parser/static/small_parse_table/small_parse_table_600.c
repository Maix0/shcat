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
	v->a[60000] = anon_sym_AMP_GT_GT;
	v->a[60001] = anon_sym_LT_AMP;
	v->a[60002] = anon_sym_GT_AMP;
	v->a[60003] = anon_sym_GT_PIPE;
	v->a[60004] = anon_sym_LT_AMP_DASH;
	v->a[60005] = anon_sym_GT_AMP_DASH;
	v->a[60006] = actions(3625);
	v->a[60007] = 12;
	v->a[60008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60009] = anon_sym_DOLLAR;
	v->a[60010] = sym__special_character;
	v->a[60011] = anon_sym_DQUOTE;
	v->a[60012] = sym_raw_string;
	v->a[60013] = aux_sym_number_token1;
	v->a[60014] = aux_sym_number_token2;
	v->a[60015] = anon_sym_DOLLAR_LBRACE;
	v->a[60016] = anon_sym_DOLLAR_LPAREN;
	v->a[60017] = anon_sym_BQUOTE;
	v->a[60018] = anon_sym_DOLLAR_BQUOTE;
	v->a[60019] = sym_word;
	small_parse_table_3001(v);
}

void	small_parse_table_3001(t_small_parse_table_array *v)
{
	v->a[60020] = 8;
	v->a[60021] = actions(3);
	v->a[60022] = 1;
	v->a[60023] = sym_comment;
	v->a[60024] = actions(3632);
	v->a[60025] = 1;
	v->a[60026] = aux_sym_heredoc_redirect_token1;
	v->a[60027] = actions(3634);
	v->a[60028] = 1;
	v->a[60029] = sym_file_descriptor;
	v->a[60030] = actions(3957);
	v->a[60031] = 1;
	v->a[60032] = anon_sym_RPAREN;
	v->a[60033] = actions(3637);
	v->a[60034] = 3;
	v->a[60035] = sym_variable_name;
	v->a[60036] = sym_test_operator;
	v->a[60037] = sym__brace_start;
	v->a[60038] = actions(3627);
	v->a[60039] = 9;
	small_parse_table_3002(v);
}

void	small_parse_table_3002(t_small_parse_table_array *v)
{
	v->a[60040] = anon_sym_PIPE;
	v->a[60041] = anon_sym_SEMI_SEMI;
	v->a[60042] = anon_sym_PIPE_AMP;
	v->a[60043] = anon_sym_AMP_AMP;
	v->a[60044] = anon_sym_PIPE_PIPE;
	v->a[60045] = anon_sym_LT_LT;
	v->a[60046] = anon_sym_LT_LT_DASH;
	v->a[60047] = anon_sym_AMP;
	v->a[60048] = anon_sym_SEMI;
	v->a[60049] = actions(3629);
	v->a[60050] = 10;
	v->a[60051] = anon_sym_LT;
	v->a[60052] = anon_sym_GT;
	v->a[60053] = anon_sym_GT_GT;
	v->a[60054] = anon_sym_AMP_GT;
	v->a[60055] = anon_sym_AMP_GT_GT;
	v->a[60056] = anon_sym_LT_AMP;
	v->a[60057] = anon_sym_GT_AMP;
	v->a[60058] = anon_sym_GT_PIPE;
	v->a[60059] = anon_sym_LT_AMP_DASH;
	small_parse_table_3003(v);
}

void	small_parse_table_3003(t_small_parse_table_array *v)
{
	v->a[60060] = anon_sym_GT_AMP_DASH;
	v->a[60061] = actions(3625);
	v->a[60062] = 12;
	v->a[60063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60064] = anon_sym_DOLLAR;
	v->a[60065] = sym__special_character;
	v->a[60066] = anon_sym_DQUOTE;
	v->a[60067] = sym_raw_string;
	v->a[60068] = aux_sym_number_token1;
	v->a[60069] = aux_sym_number_token2;
	v->a[60070] = anon_sym_DOLLAR_LBRACE;
	v->a[60071] = anon_sym_DOLLAR_LPAREN;
	v->a[60072] = anon_sym_BQUOTE;
	v->a[60073] = anon_sym_DOLLAR_BQUOTE;
	v->a[60074] = sym_word;
	v->a[60075] = 6;
	v->a[60076] = actions(3);
	v->a[60077] = 1;
	v->a[60078] = sym_comment;
	v->a[60079] = actions(3167);
	small_parse_table_3004(v);
}

void	small_parse_table_3004(t_small_parse_table_array *v)
{
	v->a[60080] = 1;
	v->a[60081] = aux_sym_concatenation_token1;
	v->a[60082] = actions(3296);
	v->a[60083] = 1;
	v->a[60084] = sym__concat;
	v->a[60085] = state(1325);
	v->a[60086] = 1;
	v->a[60087] = aux_sym_concatenation_repeat1;
	v->a[60088] = actions(2758);
	v->a[60089] = 5;
	v->a[60090] = sym_file_descriptor;
	v->a[60091] = sym_variable_name;
	v->a[60092] = sym_test_operator;
	v->a[60093] = sym__brace_start;
	v->a[60094] = aux_sym_heredoc_redirect_token1;
	v->a[60095] = actions(2756);
	v->a[60096] = 29;
	v->a[60097] = anon_sym_PIPE;
	v->a[60098] = anon_sym_PIPE_AMP;
	v->a[60099] = anon_sym_AMP_AMP;
	small_parse_table_3005(v);
}

/* EOF small_parse_table_600.c */
