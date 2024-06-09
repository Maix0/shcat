/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_430.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2150(t_small_parse_table_array *v)
{
	v->a[43000] = anon_sym_LT_LT_DASH;
	v->a[43001] = aux_sym_heredoc_redirect_token1;
	v->a[43002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43003] = anon_sym_AMP;
	v->a[43004] = aux_sym_concatenation_token1;
	v->a[43005] = anon_sym_DOLLAR;
	v->a[43006] = anon_sym_DQUOTE;
	v->a[43007] = sym_raw_string;
	v->a[43008] = aux_sym_number_token1;
	v->a[43009] = aux_sym_number_token2;
	v->a[43010] = anon_sym_DOLLAR_LBRACE;
	v->a[43011] = anon_sym_DOLLAR_LPAREN;
	v->a[43012] = anon_sym_BQUOTE;
	v->a[43013] = sym_word;
	v->a[43014] = anon_sym_SEMI;
	v->a[43015] = 19;
	v->a[43016] = actions(3);
	v->a[43017] = 1;
	v->a[43018] = sym_comment;
	v->a[43019] = actions(63);
	small_parse_table_2151(v);
}

void	small_parse_table_2151(t_small_parse_table_array *v)
{
	v->a[43020] = 1;
	v->a[43021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43022] = actions(65);
	v->a[43023] = 1;
	v->a[43024] = anon_sym_DOLLAR;
	v->a[43025] = actions(67);
	v->a[43026] = 1;
	v->a[43027] = anon_sym_DQUOTE;
	v->a[43028] = actions(71);
	v->a[43029] = 1;
	v->a[43030] = aux_sym_number_token1;
	v->a[43031] = actions(73);
	v->a[43032] = 1;
	v->a[43033] = aux_sym_number_token2;
	v->a[43034] = actions(75);
	v->a[43035] = 1;
	v->a[43036] = anon_sym_DOLLAR_LBRACE;
	v->a[43037] = actions(77);
	v->a[43038] = 1;
	v->a[43039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2152(v);
}

void	small_parse_table_2152(t_small_parse_table_array *v)
{
	v->a[43040] = actions(79);
	v->a[43041] = 1;
	v->a[43042] = anon_sym_BQUOTE;
	v->a[43043] = actions(405);
	v->a[43044] = 1;
	v->a[43045] = sym_variable_name;
	v->a[43046] = actions(1102);
	v->a[43047] = 1;
	v->a[43048] = sym_file_descriptor;
	v->a[43049] = state(258);
	v->a[43050] = 1;
	v->a[43051] = sym_command_name;
	v->a[43052] = state(582);
	v->a[43053] = 1;
	v->a[43054] = sym_concatenation;
	v->a[43055] = state(1237);
	v->a[43056] = 1;
	v->a[43057] = sym_file_redirect;
	v->a[43058] = actions(357);
	v->a[43059] = 2;
	small_parse_table_2153(v);
}

void	small_parse_table_2153(t_small_parse_table_array *v)
{
	v->a[43060] = sym_raw_string;
	v->a[43061] = sym_word;
	v->a[43062] = actions(1100);
	v->a[43063] = 2;
	v->a[43064] = anon_sym_LT_AMP_DASH;
	v->a[43065] = anon_sym_GT_AMP_DASH;
	v->a[43066] = state(996);
	v->a[43067] = 2;
	v->a[43068] = sym_variable_assignment;
	v->a[43069] = aux_sym_command_repeat1;
	v->a[43070] = state(686);
	v->a[43071] = 6;
	v->a[43072] = sym_arithmetic_expansion;
	v->a[43073] = sym_string;
	v->a[43074] = sym_number;
	v->a[43075] = sym_simple_expansion;
	v->a[43076] = sym_expansion;
	v->a[43077] = sym_command_substitution;
	v->a[43078] = actions(1098);
	v->a[43079] = 8;
	small_parse_table_2154(v);
}

void	small_parse_table_2154(t_small_parse_table_array *v)
{
	v->a[43080] = anon_sym_LT;
	v->a[43081] = anon_sym_GT;
	v->a[43082] = anon_sym_GT_GT;
	v->a[43083] = anon_sym_AMP_GT;
	v->a[43084] = anon_sym_AMP_GT_GT;
	v->a[43085] = anon_sym_LT_AMP;
	v->a[43086] = anon_sym_GT_AMP;
	v->a[43087] = anon_sym_GT_PIPE;
	v->a[43088] = 3;
	v->a[43089] = actions(3);
	v->a[43090] = 1;
	v->a[43091] = sym_comment;
	v->a[43092] = actions(1194);
	v->a[43093] = 2;
	v->a[43094] = sym_file_descriptor;
	v->a[43095] = sym__concat;
	v->a[43096] = actions(1196);
	v->a[43097] = 31;
	v->a[43098] = anon_sym_esac;
	v->a[43099] = anon_sym_PIPE;
	small_parse_table_2155(v);
}

/* EOF small_parse_table_430.c */
