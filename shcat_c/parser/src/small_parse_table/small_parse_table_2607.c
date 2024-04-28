/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2607.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13035(t_small_parse_table_array *v)
{
	v->a[260700] = sym_variable_name;
	v->a[260701] = actions(11981);
	v->a[260702] = 1;
	v->a[260703] = anon_sym_RBRACE3;
	v->a[260704] = state(3532);
	v->a[260705] = 1;
	v->a[260706] = sym_subscript;
	v->a[260707] = state(6428);
	v->a[260708] = 1;
	v->a[260709] = aux_sym__expansion_body_repeat1;
	v->a[260710] = state(6472);
	v->a[260711] = 1;
	v->a[260712] = sym_command_substitution;
	v->a[260713] = state(7461);
	v->a[260714] = 1;
	v->a[260715] = sym__expansion_body;
	v->a[260716] = actions(11762);
	v->a[260717] = 2;
	v->a[260718] = anon_sym_POUND2;
	v->a[260719] = anon_sym_EQ2;
	small_parse_table_13036(v);
}

void	small_parse_table_13036(t_small_parse_table_array *v)
{
	v->a[260720] = actions(8050);
	v->a[260721] = 3;
	v->a[260722] = sym__external_expansion_sym_hash;
	v->a[260723] = sym__external_expansion_sym_bang;
	v->a[260724] = sym__external_expansion_sym_equal;
	v->a[260725] = actions(11754);
	v->a[260726] = 4;
	v->a[260727] = anon_sym_DASH;
	v->a[260728] = anon_sym_STAR;
	v->a[260729] = anon_sym_QMARK;
	v->a[260730] = anon_sym_AT2;
	v->a[260731] = actions(11756);
	v->a[260732] = 5;
	v->a[260733] = anon_sym_BANG;
	v->a[260734] = anon_sym_DOLLAR;
	v->a[260735] = anon_sym_POUND;
	v->a[260736] = anon_sym_0;
	v->a[260737] = anon_sym__;
	v->a[260738] = 3;
	v->a[260739] = actions(3);
	small_parse_table_13037(v);
}

void	small_parse_table_13037(t_small_parse_table_array *v)
{
	v->a[260740] = 1;
	v->a[260741] = sym_comment;
	v->a[260742] = actions(1354);
	v->a[260743] = 3;
	v->a[260744] = sym_file_descriptor;
	v->a[260745] = sym__concat;
	v->a[260746] = aux_sym_heredoc_redirect_token1;
	v->a[260747] = actions(1352);
	v->a[260748] = 22;
	v->a[260749] = anon_sym_SEMI;
	v->a[260750] = anon_sym_PIPE_PIPE;
	v->a[260751] = anon_sym_AMP_AMP;
	v->a[260752] = anon_sym_PIPE;
	v->a[260753] = anon_sym_AMP;
	v->a[260754] = anon_sym_LT;
	v->a[260755] = anon_sym_GT;
	v->a[260756] = anon_sym_LT_LT;
	v->a[260757] = anon_sym_GT_GT;
	v->a[260758] = anon_sym_SEMI_SEMI;
	v->a[260759] = anon_sym_SEMI_AMP;
	small_parse_table_13038(v);
}

void	small_parse_table_13038(t_small_parse_table_array *v)
{
	v->a[260760] = anon_sym_SEMI_SEMI_AMP;
	v->a[260761] = anon_sym_PIPE_AMP;
	v->a[260762] = anon_sym_AMP_GT;
	v->a[260763] = anon_sym_AMP_GT_GT;
	v->a[260764] = anon_sym_LT_AMP;
	v->a[260765] = anon_sym_GT_AMP;
	v->a[260766] = anon_sym_GT_PIPE;
	v->a[260767] = anon_sym_LT_AMP_DASH;
	v->a[260768] = anon_sym_GT_AMP_DASH;
	v->a[260769] = anon_sym_LT_LT_DASH;
	v->a[260770] = aux_sym_concatenation_token1;
	v->a[260771] = 16;
	v->a[260772] = actions(3);
	v->a[260773] = 1;
	v->a[260774] = sym_comment;
	v->a[260775] = actions(11760);
	v->a[260776] = 1;
	v->a[260777] = anon_sym_BANG2;
	v->a[260778] = actions(11764);
	v->a[260779] = 1;
	small_parse_table_13039(v);
}

void	small_parse_table_13039(t_small_parse_table_array *v)
{
	v->a[260780] = anon_sym_DOLLAR_LPAREN;
	v->a[260781] = actions(11766);
	v->a[260782] = 1;
	v->a[260783] = anon_sym_BQUOTE;
	v->a[260784] = actions(11768);
	v->a[260785] = 1;
	v->a[260786] = anon_sym_DOLLAR_BQUOTE;
	v->a[260787] = actions(11770);
	v->a[260788] = 1;
	v->a[260789] = aux_sym__simple_variable_name_token1;
	v->a[260790] = actions(11772);
	v->a[260791] = 1;
	v->a[260792] = sym_variable_name;
	v->a[260793] = actions(11983);
	v->a[260794] = 1;
	v->a[260795] = anon_sym_RBRACE3;
	v->a[260796] = state(3532);
	v->a[260797] = 1;
	v->a[260798] = sym_subscript;
	v->a[260799] = state(6428);
	small_parse_table_13040(v);
}

/* EOF small_parse_table_2607.c */
