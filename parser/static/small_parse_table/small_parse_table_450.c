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
	v->a[45000] = anon_sym_GT_AMP;
	v->a[45001] = anon_sym_GT_PIPE;
	v->a[45002] = anon_sym_LT_GT;
	v->a[45003] = anon_sym_LT_LT;
	v->a[45004] = anon_sym_LT_LT_DASH;
	v->a[45005] = aux_sym_concatenation_token1;
	v->a[45006] = anon_sym_BQUOTE;
	v->a[45007] = anon_sym_SEMI;
	v->a[45008] = 15;
	v->a[45009] = actions(3);
	v->a[45010] = 1;
	v->a[45011] = sym_comment;
	v->a[45012] = actions(1337);
	v->a[45013] = 1;
	v->a[45014] = anon_sym_LPAREN;
	v->a[45015] = actions(1341);
	v->a[45016] = 1;
	v->a[45017] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45018] = actions(1343);
	v->a[45019] = 1;
	small_parse_table_2251(v);
}

void	small_parse_table_2251(t_small_parse_table_array *v)
{
	v->a[45020] = anon_sym_DOLLAR;
	v->a[45021] = actions(1345);
	v->a[45022] = 1;
	v->a[45023] = anon_sym_DQUOTE;
	v->a[45024] = actions(1347);
	v->a[45025] = 1;
	v->a[45026] = anon_sym_DOLLAR_LBRACE;
	v->a[45027] = actions(1349);
	v->a[45028] = 1;
	v->a[45029] = anon_sym_DOLLAR_LPAREN;
	v->a[45030] = actions(1351);
	v->a[45031] = 1;
	v->a[45032] = anon_sym_BQUOTE;
	v->a[45033] = actions(1353);
	v->a[45034] = 1;
	v->a[45035] = sym_extglob_pattern;
	v->a[45036] = state(839);
	v->a[45037] = 1;
	v->a[45038] = aux_sym_case_statement_repeat1;
	v->a[45039] = state(1432);
	small_parse_table_2252(v);
}

void	small_parse_table_2252(t_small_parse_table_array *v)
{
	v->a[45040] = 1;
	v->a[45041] = sym_case_item;
	v->a[45042] = state(1730);
	v->a[45043] = 1;
	v->a[45044] = sym__case_item_last;
	v->a[45045] = state(1594);
	v->a[45046] = 2;
	v->a[45047] = sym_concatenation;
	v->a[45048] = sym__extglob_blob;
	v->a[45049] = actions(1333);
	v->a[45050] = 3;
	v->a[45051] = sym_raw_string;
	v->a[45052] = sym_number;
	v->a[45053] = sym_word;
	v->a[45054] = state(1520);
	v->a[45055] = 5;
	v->a[45056] = sym_arithmetic_expansion;
	v->a[45057] = sym_string;
	v->a[45058] = sym_simple_expansion;
	v->a[45059] = sym_expansion;
	small_parse_table_2253(v);
}

void	small_parse_table_2253(t_small_parse_table_array *v)
{
	v->a[45060] = sym_command_substitution;
	v->a[45061] = 15;
	v->a[45062] = actions(3);
	v->a[45063] = 1;
	v->a[45064] = sym_comment;
	v->a[45065] = actions(1337);
	v->a[45066] = 1;
	v->a[45067] = anon_sym_LPAREN;
	v->a[45068] = actions(1341);
	v->a[45069] = 1;
	v->a[45070] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45071] = actions(1343);
	v->a[45072] = 1;
	v->a[45073] = anon_sym_DOLLAR;
	v->a[45074] = actions(1345);
	v->a[45075] = 1;
	v->a[45076] = anon_sym_DQUOTE;
	v->a[45077] = actions(1347);
	v->a[45078] = 1;
	v->a[45079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2254(v);
}

void	small_parse_table_2254(t_small_parse_table_array *v)
{
	v->a[45080] = actions(1349);
	v->a[45081] = 1;
	v->a[45082] = anon_sym_DOLLAR_LPAREN;
	v->a[45083] = actions(1351);
	v->a[45084] = 1;
	v->a[45085] = anon_sym_BQUOTE;
	v->a[45086] = actions(1353);
	v->a[45087] = 1;
	v->a[45088] = sym_extglob_pattern;
	v->a[45089] = state(839);
	v->a[45090] = 1;
	v->a[45091] = aux_sym_case_statement_repeat1;
	v->a[45092] = state(1432);
	v->a[45093] = 1;
	v->a[45094] = sym_case_item;
	v->a[45095] = state(1729);
	v->a[45096] = 1;
	v->a[45097] = sym__case_item_last;
	v->a[45098] = state(1594);
	v->a[45099] = 2;
	small_parse_table_2255(v);
}

/* EOF small_parse_table_450.c */
