/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1825.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9125(t_small_parse_table_array *v)
{
	v->a[182500] = state(6695);
	v->a[182501] = 2;
	v->a[182502] = sym_concatenation;
	v->a[182503] = sym__extglob_blob;
	v->a[182504] = state(6303);
	v->a[182505] = 9;
	v->a[182506] = sym_arithmetic_expansion;
	v->a[182507] = sym_brace_expression;
	v->a[182508] = sym_string;
	v->a[182509] = sym_translated_string;
	v->a[182510] = sym_number;
	v->a[182511] = sym_simple_expansion;
	v->a[182512] = sym_expansion;
	v->a[182513] = sym_command_substitution;
	v->a[182514] = sym_process_substitution;
	v->a[182515] = 6;
	v->a[182516] = actions(71);
	v->a[182517] = 1;
	v->a[182518] = sym_comment;
	v->a[182519] = actions(7719);
	small_parse_table_9126(v);
}

void	small_parse_table_9126(t_small_parse_table_array *v)
{
	v->a[182520] = 1;
	v->a[182521] = anon_sym_STAR_STAR;
	v->a[182522] = actions(7717);
	v->a[182523] = 2;
	v->a[182524] = anon_sym_PLUS_PLUS;
	v->a[182525] = anon_sym_DASH_DASH;
	v->a[182526] = actions(7721);
	v->a[182527] = 3;
	v->a[182528] = anon_sym_STAR;
	v->a[182529] = anon_sym_SLASH;
	v->a[182530] = anon_sym_PERCENT;
	v->a[182531] = actions(7248);
	v->a[182532] = 9;
	v->a[182533] = anon_sym_PIPE;
	v->a[182534] = anon_sym_CARET;
	v->a[182535] = anon_sym_AMP;
	v->a[182536] = anon_sym_LT;
	v->a[182537] = anon_sym_GT;
	v->a[182538] = anon_sym_LT_LT;
	v->a[182539] = anon_sym_GT_GT;
	small_parse_table_9127(v);
}

void	small_parse_table_9127(t_small_parse_table_array *v)
{
	v->a[182540] = anon_sym_PLUS;
	v->a[182541] = anon_sym_DASH;
	v->a[182542] = actions(7274);
	v->a[182543] = 21;
	v->a[182544] = anon_sym_COMMA;
	v->a[182545] = anon_sym_PLUS_EQ;
	v->a[182546] = anon_sym_DASH_EQ;
	v->a[182547] = anon_sym_STAR_EQ;
	v->a[182548] = anon_sym_SLASH_EQ;
	v->a[182549] = anon_sym_PERCENT_EQ;
	v->a[182550] = anon_sym_STAR_STAR_EQ;
	v->a[182551] = anon_sym_LT_LT_EQ;
	v->a[182552] = anon_sym_GT_GT_EQ;
	v->a[182553] = anon_sym_AMP_EQ;
	v->a[182554] = anon_sym_CARET_EQ;
	v->a[182555] = anon_sym_PIPE_EQ;
	v->a[182556] = anon_sym_PIPE_PIPE;
	v->a[182557] = anon_sym_DASHo;
	v->a[182558] = anon_sym_AMP_AMP;
	v->a[182559] = anon_sym_DASHa;
	small_parse_table_9128(v);
}

void	small_parse_table_9128(t_small_parse_table_array *v)
{
	v->a[182560] = anon_sym_EQ_EQ;
	v->a[182561] = anon_sym_BANG_EQ;
	v->a[182562] = anon_sym_LT_EQ;
	v->a[182563] = anon_sym_GT_EQ;
	v->a[182564] = anon_sym_RPAREN;
	v->a[182565] = 24;
	v->a[182566] = actions(71);
	v->a[182567] = 1;
	v->a[182568] = sym_comment;
	v->a[182569] = actions(6474);
	v->a[182570] = 1;
	v->a[182571] = sym_word;
	v->a[182572] = actions(6480);
	v->a[182573] = 1;
	v->a[182574] = anon_sym_LPAREN;
	v->a[182575] = actions(6488);
	v->a[182576] = 1;
	v->a[182577] = anon_sym_DOLLAR;
	v->a[182578] = actions(6494);
	v->a[182579] = 1;
	small_parse_table_9129(v);
}

void	small_parse_table_9129(t_small_parse_table_array *v)
{
	v->a[182580] = aux_sym_number_token1;
	v->a[182581] = actions(6496);
	v->a[182582] = 1;
	v->a[182583] = aux_sym_number_token2;
	v->a[182584] = actions(6500);
	v->a[182585] = 1;
	v->a[182586] = anon_sym_DOLLAR_LPAREN;
	v->a[182587] = actions(6508);
	v->a[182588] = 1;
	v->a[182589] = sym_test_operator;
	v->a[182590] = actions(6510);
	v->a[182591] = 1;
	v->a[182592] = sym_extglob_pattern;
	v->a[182593] = actions(6512);
	v->a[182594] = 1;
	v->a[182595] = sym__brace_start;
	v->a[182596] = actions(7226);
	v->a[182597] = 1;
	v->a[182598] = anon_sym_DOLLAR_LBRACK;
	v->a[182599] = actions(7228);
	small_parse_table_9130(v);
}

/* EOF small_parse_table_1825.c */
