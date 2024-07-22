/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_247.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1235(t_small_parse_table_array *v)
{
	v->a[24700] = actions(721);
	v->a[24701] = 1;
	v->a[24702] = anon_sym_QMARK;
	v->a[24703] = actions(723);
	v->a[24704] = 1;
	v->a[24705] = anon_sym_EQ;
	v->a[24706] = actions(917);
	v->a[24707] = 1;
	v->a[24708] = anon_sym_RPAREN_RPAREN;
	v->a[24709] = actions(499);
	v->a[24710] = 2;
	v->a[24711] = anon_sym_PLUS_PLUS2;
	v->a[24712] = anon_sym_DASH_DASH2;
	v->a[24713] = actions(658);
	v->a[24714] = 2;
	v->a[24715] = anon_sym_LT;
	v->a[24716] = anon_sym_GT;
	v->a[24717] = actions(660);
	v->a[24718] = 2;
	v->a[24719] = anon_sym_GT_GT;
	small_parse_table_1236(v);
}

void	small_parse_table_1236(t_small_parse_table_array *v)
{
	v->a[24720] = anon_sym_LT_LT;
	v->a[24721] = actions(668);
	v->a[24722] = 2;
	v->a[24723] = anon_sym_EQ_EQ;
	v->a[24724] = anon_sym_BANG_EQ;
	v->a[24725] = actions(670);
	v->a[24726] = 2;
	v->a[24727] = anon_sym_LT_EQ;
	v->a[24728] = anon_sym_GT_EQ;
	v->a[24729] = actions(672);
	v->a[24730] = 2;
	v->a[24731] = anon_sym_PLUS;
	v->a[24732] = anon_sym_DASH;
	v->a[24733] = actions(674);
	v->a[24734] = 3;
	v->a[24735] = anon_sym_STAR;
	v->a[24736] = anon_sym_SLASH;
	v->a[24737] = anon_sym_PERCENT;
	v->a[24738] = actions(802);
	v->a[24739] = 10;
	small_parse_table_1237(v);
}

void	small_parse_table_1237(t_small_parse_table_array *v)
{
	v->a[24740] = anon_sym_PLUS_EQ;
	v->a[24741] = anon_sym_DASH_EQ;
	v->a[24742] = anon_sym_STAR_EQ;
	v->a[24743] = anon_sym_SLASH_EQ;
	v->a[24744] = anon_sym_PERCENT_EQ;
	v->a[24745] = anon_sym_LT_LT_EQ;
	v->a[24746] = anon_sym_GT_GT_EQ;
	v->a[24747] = anon_sym_AMP_EQ;
	v->a[24748] = anon_sym_CARET_EQ;
	v->a[24749] = anon_sym_PIPE_EQ;
	v->a[24750] = 12;
	v->a[24751] = actions(3);
	v->a[24752] = 1;
	v->a[24753] = sym_comment;
	v->a[24754] = actions(678);
	v->a[24755] = 1;
	v->a[24756] = sym_file_descriptor;
	v->a[24757] = actions(903);
	v->a[24758] = 1;
	v->a[24759] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1238(v);
}

void	small_parse_table_1238(t_small_parse_table_array *v)
{
	v->a[24760] = actions(905);
	v->a[24761] = 1;
	v->a[24762] = anon_sym_DOLLAR;
	v->a[24763] = actions(907);
	v->a[24764] = 1;
	v->a[24765] = anon_sym_DQUOTE;
	v->a[24766] = actions(909);
	v->a[24767] = 1;
	v->a[24768] = anon_sym_DOLLAR_LBRACE;
	v->a[24769] = actions(911);
	v->a[24770] = 1;
	v->a[24771] = anon_sym_DOLLAR_LPAREN;
	v->a[24772] = actions(913);
	v->a[24773] = 1;
	v->a[24774] = anon_sym_BQUOTE;
	v->a[24775] = state(282);
	v->a[24776] = 2;
	v->a[24777] = sym_concatenation;
	v->a[24778] = aux_sym_for_statement_repeat1;
	v->a[24779] = actions(901);
	small_parse_table_1239(v);
}

void	small_parse_table_1239(t_small_parse_table_array *v)
{
	v->a[24780] = 3;
	v->a[24781] = sym_raw_string;
	v->a[24782] = sym_number;
	v->a[24783] = sym_word;
	v->a[24784] = state(492);
	v->a[24785] = 5;
	v->a[24786] = sym_arithmetic_expansion;
	v->a[24787] = sym_string;
	v->a[24788] = sym_simple_expansion;
	v->a[24789] = sym_expansion;
	v->a[24790] = sym_command_substitution;
	v->a[24791] = actions(676);
	v->a[24792] = 16;
	v->a[24793] = anon_sym_esac;
	v->a[24794] = anon_sym_PIPE;
	v->a[24795] = anon_sym_SEMI_SEMI;
	v->a[24796] = anon_sym_AMP_AMP;
	v->a[24797] = anon_sym_PIPE_PIPE;
	v->a[24798] = anon_sym_LT;
	v->a[24799] = anon_sym_GT;
	small_parse_table_1240(v);
}

/* EOF small_parse_table_247.c */
