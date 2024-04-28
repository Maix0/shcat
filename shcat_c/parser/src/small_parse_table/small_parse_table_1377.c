/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1377.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6885(t_small_parse_table_array *v)
{
	v->a[137700] = anon_sym_EQ;
	v->a[137701] = anon_sym_PIPE;
	v->a[137702] = anon_sym_CARET;
	v->a[137703] = anon_sym_AMP;
	v->a[137704] = anon_sym_LT;
	v->a[137705] = anon_sym_GT;
	v->a[137706] = anon_sym_LT_LT;
	v->a[137707] = anon_sym_GT_GT;
	v->a[137708] = anon_sym_PLUS;
	v->a[137709] = anon_sym_DASH;
	v->a[137710] = anon_sym_STAR;
	v->a[137711] = anon_sym_SLASH;
	v->a[137712] = anon_sym_PERCENT;
	v->a[137713] = anon_sym_STAR_STAR;
	v->a[137714] = actions(6795);
	v->a[137715] = 25;
	v->a[137716] = sym_test_operator;
	v->a[137717] = anon_sym_RPAREN_RPAREN;
	v->a[137718] = anon_sym_PLUS_PLUS;
	v->a[137719] = anon_sym_DASH_DASH;
	small_parse_table_6886(v);
}

void	small_parse_table_6886(t_small_parse_table_array *v)
{
	v->a[137720] = anon_sym_PLUS_EQ;
	v->a[137721] = anon_sym_DASH_EQ;
	v->a[137722] = anon_sym_STAR_EQ;
	v->a[137723] = anon_sym_SLASH_EQ;
	v->a[137724] = anon_sym_PERCENT_EQ;
	v->a[137725] = anon_sym_STAR_STAR_EQ;
	v->a[137726] = anon_sym_LT_LT_EQ;
	v->a[137727] = anon_sym_GT_GT_EQ;
	v->a[137728] = anon_sym_AMP_EQ;
	v->a[137729] = anon_sym_CARET_EQ;
	v->a[137730] = anon_sym_PIPE_EQ;
	v->a[137731] = anon_sym_PIPE_PIPE;
	v->a[137732] = anon_sym_AMP_AMP;
	v->a[137733] = anon_sym_EQ_EQ;
	v->a[137734] = anon_sym_BANG_EQ;
	v->a[137735] = anon_sym_LT_EQ;
	v->a[137736] = anon_sym_GT_EQ;
	v->a[137737] = anon_sym_RBRACK_RBRACK;
	v->a[137738] = anon_sym_EQ_TILDE;
	v->a[137739] = anon_sym_QMARK;
	small_parse_table_6887(v);
}

void	small_parse_table_6887(t_small_parse_table_array *v)
{
	v->a[137740] = anon_sym_COLON;
	v->a[137741] = 3;
	v->a[137742] = actions(71);
	v->a[137743] = 1;
	v->a[137744] = sym_comment;
	v->a[137745] = actions(1304);
	v->a[137746] = 14;
	v->a[137747] = anon_sym_PIPE;
	v->a[137748] = anon_sym_LT;
	v->a[137749] = anon_sym_GT;
	v->a[137750] = anon_sym_LT_LT;
	v->a[137751] = anon_sym_AMP_GT;
	v->a[137752] = anon_sym_LT_AMP;
	v->a[137753] = anon_sym_GT_AMP;
	v->a[137754] = anon_sym_DOLLAR;
	v->a[137755] = aux_sym_number_token1;
	v->a[137756] = aux_sym_number_token2;
	v->a[137757] = anon_sym_DOLLAR_LPAREN;
	v->a[137758] = anon_sym_BQUOTE;
	v->a[137759] = aux_sym__simple_variable_name_token1;
	small_parse_table_6888(v);
}

void	small_parse_table_6888(t_small_parse_table_array *v)
{
	v->a[137760] = sym_word;
	v->a[137761] = actions(1306);
	v->a[137762] = 25;
	v->a[137763] = sym_file_descriptor;
	v->a[137764] = sym__concat;
	v->a[137765] = sym_test_operator;
	v->a[137766] = sym__brace_start;
	v->a[137767] = anon_sym_LPAREN_LPAREN;
	v->a[137768] = anon_sym_PIPE_PIPE;
	v->a[137769] = anon_sym_AMP_AMP;
	v->a[137770] = anon_sym_GT_GT;
	v->a[137771] = anon_sym_PIPE_AMP;
	v->a[137772] = anon_sym_AMP_GT_GT;
	v->a[137773] = anon_sym_GT_PIPE;
	v->a[137774] = anon_sym_LT_AMP_DASH;
	v->a[137775] = anon_sym_GT_AMP_DASH;
	v->a[137776] = anon_sym_LT_LT_DASH;
	v->a[137777] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137778] = anon_sym_DOLLAR_LBRACK;
	v->a[137779] = aux_sym_concatenation_token1;
	small_parse_table_6889(v);
}

void	small_parse_table_6889(t_small_parse_table_array *v)
{
	v->a[137780] = sym__special_character;
	v->a[137781] = anon_sym_DQUOTE;
	v->a[137782] = sym_raw_string;
	v->a[137783] = sym_ansi_c_string;
	v->a[137784] = anon_sym_DOLLAR_LBRACE;
	v->a[137785] = anon_sym_DOLLAR_BQUOTE;
	v->a[137786] = anon_sym_LT_LPAREN;
	v->a[137787] = anon_sym_GT_LPAREN;
	v->a[137788] = 3;
	v->a[137789] = actions(71);
	v->a[137790] = 1;
	v->a[137791] = sym_comment;
	v->a[137792] = actions(1308);
	v->a[137793] = 14;
	v->a[137794] = anon_sym_PIPE;
	v->a[137795] = anon_sym_LT;
	v->a[137796] = anon_sym_GT;
	v->a[137797] = anon_sym_LT_LT;
	v->a[137798] = anon_sym_AMP_GT;
	v->a[137799] = anon_sym_LT_AMP;
	small_parse_table_6890(v);
}

/* EOF small_parse_table_1377.c */
