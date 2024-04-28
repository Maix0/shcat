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
	v->a[112000] = anon_sym_LT_LT;
	v->a[112001] = anon_sym_SEMI_SEMI;
	v->a[112002] = anon_sym_PIPE_AMP;
	v->a[112003] = anon_sym_LT_LT_DASH;
	v->a[112004] = actions(5823);
	v->a[112005] = 11;
	v->a[112006] = anon_sym_LT;
	v->a[112007] = anon_sym_GT;
	v->a[112008] = anon_sym_GT_GT;
	v->a[112009] = anon_sym_AMP_GT;
	v->a[112010] = anon_sym_AMP_GT_GT;
	v->a[112011] = anon_sym_LT_AMP;
	v->a[112012] = anon_sym_GT_AMP;
	v->a[112013] = anon_sym_GT_PIPE;
	v->a[112014] = anon_sym_LT_AMP_DASH;
	v->a[112015] = anon_sym_GT_AMP_DASH;
	v->a[112016] = anon_sym_LT_LT_LT;
	v->a[112017] = actions(5819);
	v->a[112018] = 17;
	v->a[112019] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5601(v);
}

void	small_parse_table_5601(t_small_parse_table_array *v)
{
	v->a[112020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112021] = anon_sym_DOLLAR_LBRACK;
	v->a[112022] = anon_sym_DOLLAR;
	v->a[112023] = sym__special_character;
	v->a[112024] = anon_sym_DQUOTE;
	v->a[112025] = sym_raw_string;
	v->a[112026] = sym_ansi_c_string;
	v->a[112027] = aux_sym_number_token1;
	v->a[112028] = aux_sym_number_token2;
	v->a[112029] = anon_sym_DOLLAR_LBRACE;
	v->a[112030] = anon_sym_DOLLAR_LPAREN;
	v->a[112031] = anon_sym_BQUOTE;
	v->a[112032] = anon_sym_DOLLAR_BQUOTE;
	v->a[112033] = anon_sym_LT_LPAREN;
	v->a[112034] = anon_sym_GT_LPAREN;
	v->a[112035] = sym_word;
	v->a[112036] = 8;
	v->a[112037] = actions(3);
	v->a[112038] = 1;
	v->a[112039] = sym_comment;
	small_parse_table_5602(v);
}

void	small_parse_table_5602(t_small_parse_table_array *v)
{
	v->a[112040] = actions(5826);
	v->a[112041] = 1;
	v->a[112042] = aux_sym_heredoc_redirect_token1;
	v->a[112043] = actions(5828);
	v->a[112044] = 1;
	v->a[112045] = sym_file_descriptor;
	v->a[112046] = actions(6329);
	v->a[112047] = 1;
	v->a[112048] = anon_sym_RPAREN;
	v->a[112049] = actions(5831);
	v->a[112050] = 3;
	v->a[112051] = sym_variable_name;
	v->a[112052] = sym_test_operator;
	v->a[112053] = sym__brace_start;
	v->a[112054] = actions(5821);
	v->a[112055] = 9;
	v->a[112056] = anon_sym_SEMI;
	v->a[112057] = anon_sym_PIPE_PIPE;
	v->a[112058] = anon_sym_AMP_AMP;
	v->a[112059] = anon_sym_PIPE;
	small_parse_table_5603(v);
}

void	small_parse_table_5603(t_small_parse_table_array *v)
{
	v->a[112060] = anon_sym_AMP;
	v->a[112061] = anon_sym_LT_LT;
	v->a[112062] = anon_sym_SEMI_SEMI;
	v->a[112063] = anon_sym_PIPE_AMP;
	v->a[112064] = anon_sym_LT_LT_DASH;
	v->a[112065] = actions(5823);
	v->a[112066] = 11;
	v->a[112067] = anon_sym_LT;
	v->a[112068] = anon_sym_GT;
	v->a[112069] = anon_sym_GT_GT;
	v->a[112070] = anon_sym_AMP_GT;
	v->a[112071] = anon_sym_AMP_GT_GT;
	v->a[112072] = anon_sym_LT_AMP;
	v->a[112073] = anon_sym_GT_AMP;
	v->a[112074] = anon_sym_GT_PIPE;
	v->a[112075] = anon_sym_LT_AMP_DASH;
	v->a[112076] = anon_sym_GT_AMP_DASH;
	v->a[112077] = anon_sym_LT_LT_LT;
	v->a[112078] = actions(5819);
	v->a[112079] = 17;
	small_parse_table_5604(v);
}

void	small_parse_table_5604(t_small_parse_table_array *v)
{
	v->a[112080] = anon_sym_LPAREN_LPAREN;
	v->a[112081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112082] = anon_sym_DOLLAR_LBRACK;
	v->a[112083] = anon_sym_DOLLAR;
	v->a[112084] = sym__special_character;
	v->a[112085] = anon_sym_DQUOTE;
	v->a[112086] = sym_raw_string;
	v->a[112087] = sym_ansi_c_string;
	v->a[112088] = aux_sym_number_token1;
	v->a[112089] = aux_sym_number_token2;
	v->a[112090] = anon_sym_DOLLAR_LBRACE;
	v->a[112091] = anon_sym_DOLLAR_LPAREN;
	v->a[112092] = anon_sym_BQUOTE;
	v->a[112093] = anon_sym_DOLLAR_BQUOTE;
	v->a[112094] = anon_sym_LT_LPAREN;
	v->a[112095] = anon_sym_GT_LPAREN;
	v->a[112096] = sym_word;
	v->a[112097] = 8;
	v->a[112098] = actions(3);
	v->a[112099] = 1;
	small_parse_table_5605(v);
}

/* EOF small_parse_table_1120.c */
