/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2587.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12935(t_small_parse_table_array *v)
{
	v->a[258700] = actions(11762);
	v->a[258701] = 2;
	v->a[258702] = anon_sym_POUND2;
	v->a[258703] = anon_sym_EQ2;
	v->a[258704] = actions(8050);
	v->a[258705] = 3;
	v->a[258706] = sym__external_expansion_sym_hash;
	v->a[258707] = sym__external_expansion_sym_bang;
	v->a[258708] = sym__external_expansion_sym_equal;
	v->a[258709] = actions(11754);
	v->a[258710] = 4;
	v->a[258711] = anon_sym_DASH;
	v->a[258712] = anon_sym_STAR;
	v->a[258713] = anon_sym_QMARK;
	v->a[258714] = anon_sym_AT2;
	v->a[258715] = actions(11756);
	v->a[258716] = 5;
	v->a[258717] = anon_sym_BANG;
	v->a[258718] = anon_sym_DOLLAR;
	v->a[258719] = anon_sym_POUND;
	small_parse_table_12936(v);
}

void	small_parse_table_12936(t_small_parse_table_array *v)
{
	v->a[258720] = anon_sym_0;
	v->a[258721] = anon_sym__;
	v->a[258722] = 5;
	v->a[258723] = actions(3);
	v->a[258724] = 1;
	v->a[258725] = sym_comment;
	v->a[258726] = actions(11802);
	v->a[258727] = 1;
	v->a[258728] = sym__special_character;
	v->a[258729] = state(4855);
	v->a[258730] = 1;
	v->a[258731] = aux_sym__literal_repeat1;
	v->a[258732] = actions(5723);
	v->a[258733] = 2;
	v->a[258734] = sym_file_descriptor;
	v->a[258735] = aux_sym_heredoc_redirect_token1;
	v->a[258736] = actions(5721);
	v->a[258737] = 21;
	v->a[258738] = anon_sym_SEMI;
	v->a[258739] = anon_sym_PIPE_PIPE;
	small_parse_table_12937(v);
}

void	small_parse_table_12937(t_small_parse_table_array *v)
{
	v->a[258740] = anon_sym_AMP_AMP;
	v->a[258741] = anon_sym_PIPE;
	v->a[258742] = anon_sym_AMP;
	v->a[258743] = anon_sym_LT;
	v->a[258744] = anon_sym_GT;
	v->a[258745] = anon_sym_LT_LT;
	v->a[258746] = anon_sym_GT_GT;
	v->a[258747] = anon_sym_SEMI_SEMI;
	v->a[258748] = anon_sym_SEMI_AMP;
	v->a[258749] = anon_sym_SEMI_SEMI_AMP;
	v->a[258750] = anon_sym_PIPE_AMP;
	v->a[258751] = anon_sym_AMP_GT;
	v->a[258752] = anon_sym_AMP_GT_GT;
	v->a[258753] = anon_sym_LT_AMP;
	v->a[258754] = anon_sym_GT_AMP;
	v->a[258755] = anon_sym_GT_PIPE;
	v->a[258756] = anon_sym_LT_AMP_DASH;
	v->a[258757] = anon_sym_GT_AMP_DASH;
	v->a[258758] = anon_sym_LT_LT_DASH;
	v->a[258759] = 16;
	small_parse_table_12938(v);
}

void	small_parse_table_12938(t_small_parse_table_array *v)
{
	v->a[258760] = actions(3);
	v->a[258761] = 1;
	v->a[258762] = sym_comment;
	v->a[258763] = actions(11760);
	v->a[258764] = 1;
	v->a[258765] = anon_sym_BANG2;
	v->a[258766] = actions(11764);
	v->a[258767] = 1;
	v->a[258768] = anon_sym_DOLLAR_LPAREN;
	v->a[258769] = actions(11766);
	v->a[258770] = 1;
	v->a[258771] = anon_sym_BQUOTE;
	v->a[258772] = actions(11768);
	v->a[258773] = 1;
	v->a[258774] = anon_sym_DOLLAR_BQUOTE;
	v->a[258775] = actions(11770);
	v->a[258776] = 1;
	v->a[258777] = aux_sym__simple_variable_name_token1;
	v->a[258778] = actions(11772);
	v->a[258779] = 1;
	small_parse_table_12939(v);
}

void	small_parse_table_12939(t_small_parse_table_array *v)
{
	v->a[258780] = sym_variable_name;
	v->a[258781] = actions(11909);
	v->a[258782] = 1;
	v->a[258783] = anon_sym_RBRACE3;
	v->a[258784] = state(3532);
	v->a[258785] = 1;
	v->a[258786] = sym_subscript;
	v->a[258787] = state(6428);
	v->a[258788] = 1;
	v->a[258789] = aux_sym__expansion_body_repeat1;
	v->a[258790] = state(6472);
	v->a[258791] = 1;
	v->a[258792] = sym_command_substitution;
	v->a[258793] = state(7284);
	v->a[258794] = 1;
	v->a[258795] = sym__expansion_body;
	v->a[258796] = actions(11762);
	v->a[258797] = 2;
	v->a[258798] = anon_sym_POUND2;
	v->a[258799] = anon_sym_EQ2;
	small_parse_table_12940(v);
}

/* EOF small_parse_table_2587.c */
