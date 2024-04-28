/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1338.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6690(t_small_parse_table_array *v)
{
	v->a[133800] = state(2548);
	v->a[133801] = 1;
	v->a[133802] = aux_sym_concatenation_repeat1;
	v->a[133803] = actions(6729);
	v->a[133804] = 2;
	v->a[133805] = sym__concat;
	v->a[133806] = aux_sym_concatenation_token1;
	v->a[133807] = actions(1251);
	v->a[133808] = 14;
	v->a[133809] = anon_sym_PIPE;
	v->a[133810] = anon_sym_LT;
	v->a[133811] = anon_sym_GT;
	v->a[133812] = anon_sym_LT_LT;
	v->a[133813] = anon_sym_AMP_GT;
	v->a[133814] = anon_sym_LT_AMP;
	v->a[133815] = anon_sym_GT_AMP;
	v->a[133816] = anon_sym_DOLLAR;
	v->a[133817] = aux_sym_number_token1;
	v->a[133818] = aux_sym_number_token2;
	v->a[133819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6691(v);
}

void	small_parse_table_6691(t_small_parse_table_array *v)
{
	v->a[133820] = anon_sym_BQUOTE;
	v->a[133821] = aux_sym__simple_variable_name_token1;
	v->a[133822] = sym_word;
	v->a[133823] = actions(1253);
	v->a[133824] = 23;
	v->a[133825] = sym_file_descriptor;
	v->a[133826] = sym_test_operator;
	v->a[133827] = sym__brace_start;
	v->a[133828] = anon_sym_LPAREN_LPAREN;
	v->a[133829] = anon_sym_PIPE_PIPE;
	v->a[133830] = anon_sym_AMP_AMP;
	v->a[133831] = anon_sym_GT_GT;
	v->a[133832] = anon_sym_PIPE_AMP;
	v->a[133833] = anon_sym_AMP_GT_GT;
	v->a[133834] = anon_sym_GT_PIPE;
	v->a[133835] = anon_sym_LT_AMP_DASH;
	v->a[133836] = anon_sym_GT_AMP_DASH;
	v->a[133837] = anon_sym_LT_LT_DASH;
	v->a[133838] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[133839] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6692(v);
}

void	small_parse_table_6692(t_small_parse_table_array *v)
{
	v->a[133840] = sym__special_character;
	v->a[133841] = anon_sym_DQUOTE;
	v->a[133842] = sym_raw_string;
	v->a[133843] = sym_ansi_c_string;
	v->a[133844] = anon_sym_DOLLAR_LBRACE;
	v->a[133845] = anon_sym_DOLLAR_BQUOTE;
	v->a[133846] = anon_sym_LT_LPAREN;
	v->a[133847] = anon_sym_GT_LPAREN;
	v->a[133848] = 7;
	v->a[133849] = actions(71);
	v->a[133850] = 1;
	v->a[133851] = sym_comment;
	v->a[133852] = actions(1105);
	v->a[133853] = 1;
	v->a[133854] = aux_sym_concatenation_token1;
	v->a[133855] = actions(6732);
	v->a[133856] = 1;
	v->a[133857] = anon_sym_RBRACK;
	v->a[133858] = actions(6734);
	v->a[133859] = 1;
	small_parse_table_6693(v);
}

void	small_parse_table_6693(t_small_parse_table_array *v)
{
	v->a[133860] = sym__concat;
	v->a[133861] = state(2533);
	v->a[133862] = 1;
	v->a[133863] = aux_sym_concatenation_repeat1;
	v->a[133864] = actions(1273);
	v->a[133865] = 14;
	v->a[133866] = anon_sym_EQ;
	v->a[133867] = anon_sym_PIPE;
	v->a[133868] = anon_sym_CARET;
	v->a[133869] = anon_sym_AMP;
	v->a[133870] = anon_sym_LT;
	v->a[133871] = anon_sym_GT;
	v->a[133872] = anon_sym_LT_LT;
	v->a[133873] = anon_sym_GT_GT;
	v->a[133874] = anon_sym_PLUS;
	v->a[133875] = anon_sym_DASH;
	v->a[133876] = anon_sym_STAR;
	v->a[133877] = anon_sym_SLASH;
	v->a[133878] = anon_sym_PERCENT;
	v->a[133879] = anon_sym_STAR_STAR;
	small_parse_table_6694(v);
}

void	small_parse_table_6694(t_small_parse_table_array *v)
{
	v->a[133880] = actions(1369);
	v->a[133881] = 22;
	v->a[133882] = sym_test_operator;
	v->a[133883] = anon_sym_PLUS_PLUS;
	v->a[133884] = anon_sym_DASH_DASH;
	v->a[133885] = anon_sym_PLUS_EQ;
	v->a[133886] = anon_sym_DASH_EQ;
	v->a[133887] = anon_sym_STAR_EQ;
	v->a[133888] = anon_sym_SLASH_EQ;
	v->a[133889] = anon_sym_PERCENT_EQ;
	v->a[133890] = anon_sym_STAR_STAR_EQ;
	v->a[133891] = anon_sym_LT_LT_EQ;
	v->a[133892] = anon_sym_GT_GT_EQ;
	v->a[133893] = anon_sym_AMP_EQ;
	v->a[133894] = anon_sym_CARET_EQ;
	v->a[133895] = anon_sym_PIPE_EQ;
	v->a[133896] = anon_sym_PIPE_PIPE;
	v->a[133897] = anon_sym_AMP_AMP;
	v->a[133898] = anon_sym_EQ_EQ;
	v->a[133899] = anon_sym_BANG_EQ;
	small_parse_table_6695(v);
}

/* EOF small_parse_table_1338.c */
