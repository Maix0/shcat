/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_598.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2990(t_small_parse_table_array *v)
{
	v->a[59800] = anon_sym_GT_AMP;
	v->a[59801] = anon_sym_GT_PIPE;
	v->a[59802] = anon_sym_LT_GT;
	v->a[59803] = 5;
	v->a[59804] = actions(3);
	v->a[59805] = 1;
	v->a[59806] = sym_comment;
	v->a[59807] = actions(2021);
	v->a[59808] = 1;
	v->a[59809] = sym_variable_name;
	v->a[59810] = actions(1982);
	v->a[59811] = 2;
	v->a[59812] = sym_file_descriptor;
	v->a[59813] = aux_sym_heredoc_redirect_token1;
	v->a[59814] = state(1081);
	v->a[59815] = 2;
	v->a[59816] = sym_variable_assignment;
	v->a[59817] = aux_sym__variable_assignments_repeat1;
	v->a[59818] = actions(1980);
	v->a[59819] = 16;
	small_parse_table_2991(v);
}

void	small_parse_table_2991(t_small_parse_table_array *v)
{
	v->a[59820] = anon_sym_PIPE;
	v->a[59821] = anon_sym_RPAREN;
	v->a[59822] = anon_sym_SEMI_SEMI;
	v->a[59823] = anon_sym_AMP_AMP;
	v->a[59824] = anon_sym_PIPE_PIPE;
	v->a[59825] = anon_sym_LT;
	v->a[59826] = anon_sym_GT;
	v->a[59827] = anon_sym_GT_GT;
	v->a[59828] = anon_sym_LT_AMP;
	v->a[59829] = anon_sym_GT_AMP;
	v->a[59830] = anon_sym_GT_PIPE;
	v->a[59831] = anon_sym_LT_GT;
	v->a[59832] = anon_sym_LT_LT;
	v->a[59833] = anon_sym_LT_LT_DASH;
	v->a[59834] = anon_sym_AMP;
	v->a[59835] = anon_sym_SEMI;
	v->a[59836] = 6;
	v->a[59837] = actions(3);
	v->a[59838] = 1;
	v->a[59839] = sym_comment;
	small_parse_table_2992(v);
}

void	small_parse_table_2992(t_small_parse_table_array *v)
{
	v->a[59840] = actions(1925);
	v->a[59841] = 1;
	v->a[59842] = aux_sym_concatenation_token1;
	v->a[59843] = actions(1927);
	v->a[59844] = 1;
	v->a[59845] = sym__concat;
	v->a[59846] = state(1083);
	v->a[59847] = 1;
	v->a[59848] = aux_sym_concatenation_repeat1;
	v->a[59849] = actions(1194);
	v->a[59850] = 2;
	v->a[59851] = sym_file_descriptor;
	v->a[59852] = sym_variable_name;
	v->a[59853] = actions(1196);
	v->a[59854] = 16;
	v->a[59855] = anon_sym_LT;
	v->a[59856] = anon_sym_GT;
	v->a[59857] = anon_sym_GT_GT;
	v->a[59858] = anon_sym_LT_AMP;
	v->a[59859] = anon_sym_GT_AMP;
	small_parse_table_2993(v);
}

void	small_parse_table_2993(t_small_parse_table_array *v)
{
	v->a[59860] = anon_sym_GT_PIPE;
	v->a[59861] = anon_sym_LT_GT;
	v->a[59862] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59863] = anon_sym_DOLLAR;
	v->a[59864] = anon_sym_DQUOTE;
	v->a[59865] = sym_raw_string;
	v->a[59866] = sym_number;
	v->a[59867] = anon_sym_DOLLAR_LBRACE;
	v->a[59868] = anon_sym_DOLLAR_LPAREN;
	v->a[59869] = anon_sym_BQUOTE;
	v->a[59870] = sym_word;
	v->a[59871] = 15;
	v->a[59872] = actions(3);
	v->a[59873] = 1;
	v->a[59874] = sym_comment;
	v->a[59875] = actions(1637);
	v->a[59876] = 1;
	v->a[59877] = anon_sym_LPAREN;
	v->a[59878] = actions(1641);
	v->a[59879] = 1;
	small_parse_table_2994(v);
}

void	small_parse_table_2994(t_small_parse_table_array *v)
{
	v->a[59880] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59881] = actions(1643);
	v->a[59882] = 1;
	v->a[59883] = anon_sym_DOLLAR;
	v->a[59884] = actions(1645);
	v->a[59885] = 1;
	v->a[59886] = anon_sym_DQUOTE;
	v->a[59887] = actions(1647);
	v->a[59888] = 1;
	v->a[59889] = anon_sym_DOLLAR_LBRACE;
	v->a[59890] = actions(1649);
	v->a[59891] = 1;
	v->a[59892] = anon_sym_DOLLAR_LPAREN;
	v->a[59893] = actions(1651);
	v->a[59894] = 1;
	v->a[59895] = anon_sym_BQUOTE;
	v->a[59896] = actions(1653);
	v->a[59897] = 1;
	v->a[59898] = sym_extglob_pattern;
	v->a[59899] = state(1123);
	small_parse_table_2995(v);
}

/* EOF small_parse_table_598.c */
