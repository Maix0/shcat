/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_571.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2855(t_small_parse_table_array *v)
{
	v->a[57100] = 15;
	v->a[57101] = actions(3);
	v->a[57102] = 1;
	v->a[57103] = sym_comment;
	v->a[57104] = actions(1720);
	v->a[57105] = 1;
	v->a[57106] = anon_sym_LPAREN;
	v->a[57107] = actions(1724);
	v->a[57108] = 1;
	v->a[57109] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57110] = actions(1726);
	v->a[57111] = 1;
	v->a[57112] = anon_sym_DOLLAR;
	v->a[57113] = actions(1728);
	v->a[57114] = 1;
	v->a[57115] = anon_sym_DQUOTE;
	v->a[57116] = actions(1730);
	v->a[57117] = 1;
	v->a[57118] = anon_sym_DOLLAR_LBRACE;
	v->a[57119] = actions(1732);
	small_parse_table_2856(v);
}

void	small_parse_table_2856(t_small_parse_table_array *v)
{
	v->a[57120] = 1;
	v->a[57121] = anon_sym_DOLLAR_LPAREN;
	v->a[57122] = actions(1734);
	v->a[57123] = 1;
	v->a[57124] = anon_sym_BQUOTE;
	v->a[57125] = actions(1736);
	v->a[57126] = 1;
	v->a[57127] = sym_extglob_pattern;
	v->a[57128] = state(1050);
	v->a[57129] = 1;
	v->a[57130] = aux_sym_case_statement_repeat1;
	v->a[57131] = state(1682);
	v->a[57132] = 1;
	v->a[57133] = sym_case_item;
	v->a[57134] = state(2088);
	v->a[57135] = 1;
	v->a[57136] = sym__case_item_last;
	v->a[57137] = state(1877);
	v->a[57138] = 2;
	v->a[57139] = sym_concatenation;
	small_parse_table_2857(v);
}

void	small_parse_table_2857(t_small_parse_table_array *v)
{
	v->a[57140] = sym__extglob_blob;
	v->a[57141] = actions(1716);
	v->a[57142] = 3;
	v->a[57143] = sym_raw_string;
	v->a[57144] = sym_number;
	v->a[57145] = sym_word;
	v->a[57146] = state(1772);
	v->a[57147] = 5;
	v->a[57148] = sym_arithmetic_expansion;
	v->a[57149] = sym_string;
	v->a[57150] = sym_simple_expansion;
	v->a[57151] = sym_expansion;
	v->a[57152] = sym_command_substitution;
	v->a[57153] = 15;
	v->a[57154] = actions(3);
	v->a[57155] = 1;
	v->a[57156] = sym_comment;
	v->a[57157] = actions(1720);
	v->a[57158] = 1;
	v->a[57159] = anon_sym_LPAREN;
	small_parse_table_2858(v);
}

void	small_parse_table_2858(t_small_parse_table_array *v)
{
	v->a[57160] = actions(1724);
	v->a[57161] = 1;
	v->a[57162] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57163] = actions(1726);
	v->a[57164] = 1;
	v->a[57165] = anon_sym_DOLLAR;
	v->a[57166] = actions(1728);
	v->a[57167] = 1;
	v->a[57168] = anon_sym_DQUOTE;
	v->a[57169] = actions(1730);
	v->a[57170] = 1;
	v->a[57171] = anon_sym_DOLLAR_LBRACE;
	v->a[57172] = actions(1732);
	v->a[57173] = 1;
	v->a[57174] = anon_sym_DOLLAR_LPAREN;
	v->a[57175] = actions(1734);
	v->a[57176] = 1;
	v->a[57177] = anon_sym_BQUOTE;
	v->a[57178] = actions(1736);
	v->a[57179] = 1;
	small_parse_table_2859(v);
}

void	small_parse_table_2859(t_small_parse_table_array *v)
{
	v->a[57180] = sym_extglob_pattern;
	v->a[57181] = state(1050);
	v->a[57182] = 1;
	v->a[57183] = aux_sym_case_statement_repeat1;
	v->a[57184] = state(1682);
	v->a[57185] = 1;
	v->a[57186] = sym_case_item;
	v->a[57187] = state(2080);
	v->a[57188] = 1;
	v->a[57189] = sym__case_item_last;
	v->a[57190] = state(1877);
	v->a[57191] = 2;
	v->a[57192] = sym_concatenation;
	v->a[57193] = sym__extglob_blob;
	v->a[57194] = actions(1716);
	v->a[57195] = 3;
	v->a[57196] = sym_raw_string;
	v->a[57197] = sym_number;
	v->a[57198] = sym_word;
	v->a[57199] = state(1772);
	small_parse_table_2860(v);
}

/* EOF small_parse_table_571.c */
