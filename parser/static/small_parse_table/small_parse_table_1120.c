/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1120.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5600(t_small_parse_table_array *v)
{
	v->a[112000] = actions(5738);
	v->a[112001] = 1;
	v->a[112002] = anon_sym_DOLLAR_LPAREN;
	v->a[112003] = actions(5740);
	v->a[112004] = 1;
	v->a[112005] = anon_sym_BQUOTE;
	v->a[112006] = actions(5742);
	v->a[112007] = 1;
	v->a[112008] = anon_sym_DOLLAR_BQUOTE;
	v->a[112009] = actions(5748);
	v->a[112010] = 1;
	v->a[112011] = sym__brace_start;
	v->a[112012] = actions(6422);
	v->a[112013] = 1;
	v->a[112014] = sym_word;
	v->a[112015] = actions(6424);
	v->a[112016] = 1;
	v->a[112017] = anon_sym_DOLLAR;
	v->a[112018] = actions(6426);
	v->a[112019] = 1;
	small_parse_table_5601(v);
}

void	small_parse_table_5601(t_small_parse_table_array *v)
{
	v->a[112020] = sym__special_character;
	v->a[112021] = actions(6430);
	v->a[112022] = 1;
	v->a[112023] = sym__comment_word;
	v->a[112024] = actions(6428);
	v->a[112025] = 3;
	v->a[112026] = sym_test_operator;
	v->a[112027] = sym__bare_dollar;
	v->a[112028] = sym_raw_string;
	v->a[112029] = state(1969);
	v->a[112030] = 7;
	v->a[112031] = sym_arithmetic_expansion;
	v->a[112032] = sym_brace_expression;
	v->a[112033] = sym_string;
	v->a[112034] = sym_number;
	v->a[112035] = sym_simple_expansion;
	v->a[112036] = sym_expansion;
	v->a[112037] = sym_command_substitution;
	v->a[112038] = 3;
	v->a[112039] = actions(3);
	small_parse_table_5602(v);
}

void	small_parse_table_5602(t_small_parse_table_array *v)
{
	v->a[112040] = 1;
	v->a[112041] = sym_comment;
	v->a[112042] = actions(6231);
	v->a[112043] = 2;
	v->a[112044] = sym_file_descriptor;
	v->a[112045] = aux_sym_heredoc_redirect_token1;
	v->a[112046] = actions(6229);
	v->a[112047] = 21;
	v->a[112048] = anon_sym_PIPE;
	v->a[112049] = anon_sym_SEMI_SEMI;
	v->a[112050] = anon_sym_SEMI_AMP;
	v->a[112051] = anon_sym_SEMI_SEMI_AMP;
	v->a[112052] = anon_sym_PIPE_AMP;
	v->a[112053] = anon_sym_AMP_AMP;
	v->a[112054] = anon_sym_PIPE_PIPE;
	v->a[112055] = anon_sym_LT;
	v->a[112056] = anon_sym_GT;
	v->a[112057] = anon_sym_GT_GT;
	v->a[112058] = anon_sym_AMP_GT;
	v->a[112059] = anon_sym_AMP_GT_GT;
	small_parse_table_5603(v);
}

void	small_parse_table_5603(t_small_parse_table_array *v)
{
	v->a[112060] = anon_sym_LT_AMP;
	v->a[112061] = anon_sym_GT_AMP;
	v->a[112062] = anon_sym_GT_PIPE;
	v->a[112063] = anon_sym_LT_AMP_DASH;
	v->a[112064] = anon_sym_GT_AMP_DASH;
	v->a[112065] = anon_sym_LT_LT;
	v->a[112066] = anon_sym_LT_LT_DASH;
	v->a[112067] = anon_sym_AMP;
	v->a[112068] = anon_sym_SEMI;
	v->a[112069] = 16;
	v->a[112070] = actions(3);
	v->a[112071] = 1;
	v->a[112072] = sym_comment;
	v->a[112073] = actions(2160);
	v->a[112074] = 1;
	v->a[112075] = aux_sym_number_token1;
	v->a[112076] = actions(2162);
	v->a[112077] = 1;
	v->a[112078] = aux_sym_number_token2;
	v->a[112079] = actions(2166);
	small_parse_table_5604(v);
}

void	small_parse_table_5604(t_small_parse_table_array *v)
{
	v->a[112080] = 1;
	v->a[112081] = anon_sym_DOLLAR_LPAREN;
	v->a[112082] = actions(2174);
	v->a[112083] = 1;
	v->a[112084] = sym__brace_start;
	v->a[112085] = actions(5989);
	v->a[112086] = 1;
	v->a[112087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112088] = actions(5993);
	v->a[112089] = 1;
	v->a[112090] = anon_sym_DQUOTE;
	v->a[112091] = actions(5995);
	v->a[112092] = 1;
	v->a[112093] = anon_sym_DOLLAR_LBRACE;
	v->a[112094] = actions(5997);
	v->a[112095] = 1;
	v->a[112096] = anon_sym_BQUOTE;
	v->a[112097] = actions(5999);
	v->a[112098] = 1;
	v->a[112099] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5605(v);
}

/* EOF small_parse_table_1120.c */
