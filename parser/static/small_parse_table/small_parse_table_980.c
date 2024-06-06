/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_980.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4900(t_small_parse_table_array *v)
{
	v->a[98000] = aux_sym_number_token1;
	v->a[98001] = aux_sym_number_token2;
	v->a[98002] = anon_sym_DOLLAR_LPAREN;
	v->a[98003] = sym_word;
	v->a[98004] = actions(1390);
	v->a[98005] = 16;
	v->a[98006] = sym_file_descriptor;
	v->a[98007] = sym_variable_name;
	v->a[98008] = sym_test_operator;
	v->a[98009] = sym__brace_start;
	v->a[98010] = anon_sym_GT_GT;
	v->a[98011] = anon_sym_AMP_GT_GT;
	v->a[98012] = anon_sym_GT_PIPE;
	v->a[98013] = anon_sym_LT_AMP_DASH;
	v->a[98014] = anon_sym_GT_AMP_DASH;
	v->a[98015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98016] = sym__special_character;
	v->a[98017] = anon_sym_DQUOTE;
	v->a[98018] = sym_raw_string;
	v->a[98019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4901(v);
}

void	small_parse_table_4901(t_small_parse_table_array *v)
{
	v->a[98020] = anon_sym_BQUOTE;
	v->a[98021] = anon_sym_DOLLAR_BQUOTE;
	v->a[98022] = 3;
	v->a[98023] = actions(3);
	v->a[98024] = 1;
	v->a[98025] = sym_comment;
	v->a[98026] = actions(3159);
	v->a[98027] = 4;
	v->a[98028] = sym_file_descriptor;
	v->a[98029] = sym__concat;
	v->a[98030] = ts_builtin_sym_end;
	v->a[98031] = aux_sym_heredoc_redirect_token1;
	v->a[98032] = actions(3157);
	v->a[98033] = 22;
	v->a[98034] = anon_sym_PIPE;
	v->a[98035] = anon_sym_RPAREN;
	v->a[98036] = anon_sym_SEMI_SEMI;
	v->a[98037] = anon_sym_PIPE_AMP;
	v->a[98038] = anon_sym_AMP_AMP;
	v->a[98039] = anon_sym_PIPE_PIPE;
	small_parse_table_4902(v);
}

void	small_parse_table_4902(t_small_parse_table_array *v)
{
	v->a[98040] = anon_sym_LT;
	v->a[98041] = anon_sym_GT;
	v->a[98042] = anon_sym_GT_GT;
	v->a[98043] = anon_sym_AMP_GT;
	v->a[98044] = anon_sym_AMP_GT_GT;
	v->a[98045] = anon_sym_LT_AMP;
	v->a[98046] = anon_sym_GT_AMP;
	v->a[98047] = anon_sym_GT_PIPE;
	v->a[98048] = anon_sym_LT_AMP_DASH;
	v->a[98049] = anon_sym_GT_AMP_DASH;
	v->a[98050] = anon_sym_LT_LT;
	v->a[98051] = anon_sym_LT_LT_DASH;
	v->a[98052] = anon_sym_AMP;
	v->a[98053] = aux_sym_concatenation_token1;
	v->a[98054] = anon_sym_BQUOTE;
	v->a[98055] = anon_sym_SEMI;
	v->a[98056] = 3;
	v->a[98057] = actions(57);
	v->a[98058] = 1;
	v->a[98059] = sym_comment;
	small_parse_table_4903(v);
}

void	small_parse_table_4903(t_small_parse_table_array *v)
{
	v->a[98060] = actions(1180);
	v->a[98061] = 10;
	v->a[98062] = anon_sym_LT;
	v->a[98063] = anon_sym_GT;
	v->a[98064] = anon_sym_AMP_GT;
	v->a[98065] = anon_sym_LT_AMP;
	v->a[98066] = anon_sym_GT_AMP;
	v->a[98067] = anon_sym_DOLLAR;
	v->a[98068] = aux_sym_number_token1;
	v->a[98069] = aux_sym_number_token2;
	v->a[98070] = anon_sym_DOLLAR_LPAREN;
	v->a[98071] = sym_word;
	v->a[98072] = actions(1182);
	v->a[98073] = 16;
	v->a[98074] = sym_file_descriptor;
	v->a[98075] = sym_variable_name;
	v->a[98076] = sym_test_operator;
	v->a[98077] = sym__brace_start;
	v->a[98078] = anon_sym_GT_GT;
	v->a[98079] = anon_sym_AMP_GT_GT;
	small_parse_table_4904(v);
}

void	small_parse_table_4904(t_small_parse_table_array *v)
{
	v->a[98080] = anon_sym_GT_PIPE;
	v->a[98081] = anon_sym_LT_AMP_DASH;
	v->a[98082] = anon_sym_GT_AMP_DASH;
	v->a[98083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98084] = sym__special_character;
	v->a[98085] = anon_sym_DQUOTE;
	v->a[98086] = sym_raw_string;
	v->a[98087] = anon_sym_DOLLAR_LBRACE;
	v->a[98088] = anon_sym_BQUOTE;
	v->a[98089] = anon_sym_DOLLAR_BQUOTE;
	v->a[98090] = 3;
	v->a[98091] = actions(3);
	v->a[98092] = 1;
	v->a[98093] = sym_comment;
	v->a[98094] = actions(2967);
	v->a[98095] = 4;
	v->a[98096] = sym_file_descriptor;
	v->a[98097] = sym__concat;
	v->a[98098] = ts_builtin_sym_end;
	v->a[98099] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4905(v);
}

/* EOF small_parse_table_980.c */
