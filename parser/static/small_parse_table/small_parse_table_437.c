/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_437.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2185(t_small_parse_table_array *v)
{
	v->a[43700] = actions(1483);
	v->a[43701] = 1;
	v->a[43702] = anon_sym_DQUOTE;
	v->a[43703] = actions(1487);
	v->a[43704] = 1;
	v->a[43705] = anon_sym_DOLLAR_LBRACE;
	v->a[43706] = actions(1489);
	v->a[43707] = 1;
	v->a[43708] = anon_sym_DOLLAR_LPAREN;
	v->a[43709] = actions(1491);
	v->a[43710] = 1;
	v->a[43711] = anon_sym_BQUOTE;
	v->a[43712] = actions(1493);
	v->a[43713] = 1;
	v->a[43714] = sym_variable_name;
	v->a[43715] = actions(1568);
	v->a[43716] = 1;
	v->a[43717] = anon_sym_RPAREN_RPAREN;
	v->a[43718] = actions(1475);
	v->a[43719] = 2;
	small_parse_table_2186(v);
}

void	small_parse_table_2186(t_small_parse_table_array *v)
{
	v->a[43720] = anon_sym_PLUS_PLUS;
	v->a[43721] = anon_sym_DASH_DASH;
	v->a[43722] = actions(1477);
	v->a[43723] = 2;
	v->a[43724] = anon_sym_DASH2;
	v->a[43725] = anon_sym_PLUS2;
	v->a[43726] = actions(1485);
	v->a[43727] = 2;
	v->a[43728] = sym_number;
	v->a[43729] = aux_sym__simple_variable_name_token1;
	v->a[43730] = state(194);
	v->a[43731] = 3;
	v->a[43732] = sym_string;
	v->a[43733] = sym_simple_expansion;
	v->a[43734] = sym_expansion;
	v->a[43735] = state(294);
	v->a[43736] = 8;
	v->a[43737] = sym__arithmetic_expression;
	v->a[43738] = sym_arithmetic_literal;
	v->a[43739] = sym_arithmetic_binary_expression;
	small_parse_table_2187(v);
}

void	small_parse_table_2187(t_small_parse_table_array *v)
{
	v->a[43740] = sym_arithmetic_ternary_expression;
	v->a[43741] = sym_arithmetic_unary_expression;
	v->a[43742] = sym_arithmetic_postfix_expression;
	v->a[43743] = sym_arithmetic_parenthesized_expression;
	v->a[43744] = sym_command_substitution;
	v->a[43745] = 3;
	v->a[43746] = actions(3);
	v->a[43747] = 1;
	v->a[43748] = sym_comment;
	v->a[43749] = actions(1404);
	v->a[43750] = 2;
	v->a[43751] = sym_file_descriptor;
	v->a[43752] = sym_variable_name;
	v->a[43753] = actions(1402);
	v->a[43754] = 25;
	v->a[43755] = anon_sym_for;
	v->a[43756] = anon_sym_while;
	v->a[43757] = anon_sym_until;
	v->a[43758] = anon_sym_if;
	v->a[43759] = anon_sym_case;
	small_parse_table_2188(v);
}

void	small_parse_table_2188(t_small_parse_table_array *v)
{
	v->a[43760] = anon_sym_LPAREN;
	v->a[43761] = anon_sym_LBRACE;
	v->a[43762] = anon_sym_RBRACE;
	v->a[43763] = anon_sym_BANG;
	v->a[43764] = anon_sym_LT;
	v->a[43765] = anon_sym_GT;
	v->a[43766] = anon_sym_GT_GT;
	v->a[43767] = anon_sym_LT_AMP;
	v->a[43768] = anon_sym_GT_AMP;
	v->a[43769] = anon_sym_GT_PIPE;
	v->a[43770] = anon_sym_LT_GT;
	v->a[43771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43772] = anon_sym_DOLLAR;
	v->a[43773] = anon_sym_DQUOTE;
	v->a[43774] = sym_raw_string;
	v->a[43775] = sym_number;
	v->a[43776] = anon_sym_DOLLAR_LBRACE;
	v->a[43777] = anon_sym_DOLLAR_LPAREN;
	v->a[43778] = anon_sym_BQUOTE;
	v->a[43779] = sym_word;
	small_parse_table_2189(v);
}

void	small_parse_table_2189(t_small_parse_table_array *v)
{
	v->a[43780] = 3;
	v->a[43781] = actions(3);
	v->a[43782] = 1;
	v->a[43783] = sym_comment;
	v->a[43784] = actions(1200);
	v->a[43785] = 3;
	v->a[43786] = sym_file_descriptor;
	v->a[43787] = sym_variable_name;
	v->a[43788] = ts_builtin_sym_end;
	v->a[43789] = actions(1202);
	v->a[43790] = 24;
	v->a[43791] = anon_sym_PIPE;
	v->a[43792] = anon_sym_SEMI_SEMI;
	v->a[43793] = anon_sym_AMP_AMP;
	v->a[43794] = anon_sym_PIPE_PIPE;
	v->a[43795] = anon_sym_LT;
	v->a[43796] = anon_sym_GT;
	v->a[43797] = anon_sym_GT_GT;
	v->a[43798] = anon_sym_LT_AMP;
	v->a[43799] = anon_sym_GT_AMP;
	small_parse_table_2190(v);
}

/* EOF small_parse_table_437.c */
