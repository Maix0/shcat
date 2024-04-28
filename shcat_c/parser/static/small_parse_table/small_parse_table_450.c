/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_450.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2250(t_small_parse_table_array *v)
{
	v->a[45000] = actions(3);
	v->a[45001] = 1;
	v->a[45002] = sym_comment;
	v->a[45003] = actions(5071);
	v->a[45004] = 1;
	v->a[45005] = aux_sym_concatenation_token1;
	v->a[45006] = actions(5247);
	v->a[45007] = 1;
	v->a[45008] = sym__concat;
	v->a[45009] = state(1088);
	v->a[45010] = 1;
	v->a[45011] = aux_sym_concatenation_repeat1;
	v->a[45012] = actions(1267);
	v->a[45013] = 5;
	v->a[45014] = sym_file_descriptor;
	v->a[45015] = sym_variable_name;
	v->a[45016] = sym_test_operator;
	v->a[45017] = sym__brace_start;
	v->a[45018] = aux_sym_heredoc_redirect_token1;
	v->a[45019] = actions(1265);
	small_parse_table_2251(v);
}

void	small_parse_table_2251(t_small_parse_table_array *v)
{
	v->a[45020] = 40;
	v->a[45021] = anon_sym_LPAREN_LPAREN;
	v->a[45022] = anon_sym_SEMI;
	v->a[45023] = anon_sym_PIPE_PIPE;
	v->a[45024] = anon_sym_AMP_AMP;
	v->a[45025] = anon_sym_PIPE;
	v->a[45026] = anon_sym_AMP;
	v->a[45027] = anon_sym_LT;
	v->a[45028] = anon_sym_GT;
	v->a[45029] = anon_sym_LT_LT;
	v->a[45030] = anon_sym_GT_GT;
	v->a[45031] = anon_sym_esac;
	v->a[45032] = anon_sym_SEMI_SEMI;
	v->a[45033] = anon_sym_SEMI_AMP;
	v->a[45034] = anon_sym_SEMI_SEMI_AMP;
	v->a[45035] = anon_sym_PIPE_AMP;
	v->a[45036] = anon_sym_AMP_GT;
	v->a[45037] = anon_sym_AMP_GT_GT;
	v->a[45038] = anon_sym_LT_AMP;
	v->a[45039] = anon_sym_GT_AMP;
	small_parse_table_2252(v);
}

void	small_parse_table_2252(t_small_parse_table_array *v)
{
	v->a[45040] = anon_sym_GT_PIPE;
	v->a[45041] = anon_sym_LT_AMP_DASH;
	v->a[45042] = anon_sym_GT_AMP_DASH;
	v->a[45043] = anon_sym_LT_LT_DASH;
	v->a[45044] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45045] = anon_sym_DOLLAR_LBRACK;
	v->a[45046] = anon_sym_DOLLAR;
	v->a[45047] = sym__special_character;
	v->a[45048] = anon_sym_DQUOTE;
	v->a[45049] = sym_raw_string;
	v->a[45050] = sym_ansi_c_string;
	v->a[45051] = aux_sym_number_token1;
	v->a[45052] = aux_sym_number_token2;
	v->a[45053] = anon_sym_DOLLAR_LBRACE;
	v->a[45054] = anon_sym_DOLLAR_LPAREN;
	v->a[45055] = anon_sym_BQUOTE;
	v->a[45056] = anon_sym_DOLLAR_BQUOTE;
	v->a[45057] = anon_sym_LT_LPAREN;
	v->a[45058] = anon_sym_GT_LPAREN;
	v->a[45059] = aux_sym__simple_variable_name_token1;
	small_parse_table_2253(v);
}

void	small_parse_table_2253(t_small_parse_table_array *v)
{
	v->a[45060] = sym_word;
	v->a[45061] = 6;
	v->a[45062] = actions(3);
	v->a[45063] = 1;
	v->a[45064] = sym_comment;
	v->a[45065] = actions(5071);
	v->a[45066] = 1;
	v->a[45067] = aux_sym_concatenation_token1;
	v->a[45068] = actions(5249);
	v->a[45069] = 1;
	v->a[45070] = sym__concat;
	v->a[45071] = state(1088);
	v->a[45072] = 1;
	v->a[45073] = aux_sym_concatenation_repeat1;
	v->a[45074] = actions(1288);
	v->a[45075] = 5;
	v->a[45076] = sym_file_descriptor;
	v->a[45077] = sym_variable_name;
	v->a[45078] = sym_test_operator;
	v->a[45079] = sym__brace_start;
	small_parse_table_2254(v);
}

void	small_parse_table_2254(t_small_parse_table_array *v)
{
	v->a[45080] = aux_sym_heredoc_redirect_token1;
	v->a[45081] = actions(1286);
	v->a[45082] = 40;
	v->a[45083] = anon_sym_LPAREN_LPAREN;
	v->a[45084] = anon_sym_SEMI;
	v->a[45085] = anon_sym_PIPE_PIPE;
	v->a[45086] = anon_sym_AMP_AMP;
	v->a[45087] = anon_sym_PIPE;
	v->a[45088] = anon_sym_AMP;
	v->a[45089] = anon_sym_LT;
	v->a[45090] = anon_sym_GT;
	v->a[45091] = anon_sym_LT_LT;
	v->a[45092] = anon_sym_GT_GT;
	v->a[45093] = anon_sym_esac;
	v->a[45094] = anon_sym_SEMI_SEMI;
	v->a[45095] = anon_sym_SEMI_AMP;
	v->a[45096] = anon_sym_SEMI_SEMI_AMP;
	v->a[45097] = anon_sym_PIPE_AMP;
	v->a[45098] = anon_sym_AMP_GT;
	v->a[45099] = anon_sym_AMP_GT_GT;
	small_parse_table_2255(v);
}

/* EOF small_parse_table_450.c */
