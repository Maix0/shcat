/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1408.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7040(t_small_parse_table_array *v)
{
	v->a[140800] = sym_variable_name;
	v->a[140801] = actions(2922);
	v->a[140802] = 2;
	v->a[140803] = aux_sym__simple_variable_name_token1;
	v->a[140804] = aux_sym__multiline_variable_name_token1;
	v->a[140805] = actions(2920);
	v->a[140806] = 9;
	v->a[140807] = anon_sym_BANG;
	v->a[140808] = anon_sym_DASH;
	v->a[140809] = anon_sym_STAR;
	v->a[140810] = anon_sym_QMARK;
	v->a[140811] = anon_sym_DOLLAR;
	v->a[140812] = anon_sym_POUND;
	v->a[140813] = anon_sym_AT;
	v->a[140814] = anon_sym_0;
	v->a[140815] = anon_sym__;
	v->a[140816] = 6;
	v->a[140817] = actions(57);
	v->a[140818] = 1;
	v->a[140819] = sym_comment;
	small_parse_table_7041(v);
}

void	small_parse_table_7041(t_small_parse_table_array *v)
{
	v->a[140820] = actions(8271);
	v->a[140821] = 1;
	v->a[140822] = anon_sym_LT_LT;
	v->a[140823] = actions(8273);
	v->a[140824] = 1;
	v->a[140825] = anon_sym_LT_LT_DASH;
	v->a[140826] = actions(8269);
	v->a[140827] = 2;
	v->a[140828] = anon_sym_LT_AMP_DASH;
	v->a[140829] = anon_sym_GT_AMP_DASH;
	v->a[140830] = actions(8267);
	v->a[140831] = 3;
	v->a[140832] = anon_sym_GT_GT;
	v->a[140833] = anon_sym_AMP_GT_GT;
	v->a[140834] = anon_sym_GT_PIPE;
	v->a[140835] = actions(8265);
	v->a[140836] = 5;
	v->a[140837] = anon_sym_LT;
	v->a[140838] = anon_sym_GT;
	v->a[140839] = anon_sym_AMP_GT;
	small_parse_table_7042(v);
}

void	small_parse_table_7042(t_small_parse_table_array *v)
{
	v->a[140840] = anon_sym_LT_AMP;
	v->a[140841] = anon_sym_GT_AMP;
	v->a[140842] = 9;
	v->a[140843] = actions(57);
	v->a[140844] = 1;
	v->a[140845] = sym_comment;
	v->a[140846] = actions(8275);
	v->a[140847] = 1;
	v->a[140848] = anon_sym_DOLLAR;
	v->a[140849] = actions(8277);
	v->a[140850] = 1;
	v->a[140851] = anon_sym_DOLLAR_LBRACE;
	v->a[140852] = actions(8279);
	v->a[140853] = 1;
	v->a[140854] = anon_sym_DOLLAR_LPAREN;
	v->a[140855] = actions(8281);
	v->a[140856] = 1;
	v->a[140857] = anon_sym_BQUOTE;
	v->a[140858] = actions(8283);
	v->a[140859] = 1;
	small_parse_table_7043(v);
}

void	small_parse_table_7043(t_small_parse_table_array *v)
{
	v->a[140860] = anon_sym_DOLLAR_BQUOTE;
	v->a[140861] = actions(8285);
	v->a[140862] = 1;
	v->a[140863] = sym_heredoc_content;
	v->a[140864] = actions(8287);
	v->a[140865] = 1;
	v->a[140866] = sym_heredoc_end;
	v->a[140867] = state(3194);
	v->a[140868] = 4;
	v->a[140869] = sym_simple_expansion;
	v->a[140870] = sym_expansion;
	v->a[140871] = sym_command_substitution;
	v->a[140872] = aux_sym_heredoc_body_repeat1;
	v->a[140873] = 9;
	v->a[140874] = actions(57);
	v->a[140875] = 1;
	v->a[140876] = sym_comment;
	v->a[140877] = actions(8289);
	v->a[140878] = 1;
	v->a[140879] = anon_sym_DOLLAR;
	small_parse_table_7044(v);
}

void	small_parse_table_7044(t_small_parse_table_array *v)
{
	v->a[140880] = actions(8292);
	v->a[140881] = 1;
	v->a[140882] = anon_sym_DOLLAR_LBRACE;
	v->a[140883] = actions(8295);
	v->a[140884] = 1;
	v->a[140885] = anon_sym_DOLLAR_LPAREN;
	v->a[140886] = actions(8298);
	v->a[140887] = 1;
	v->a[140888] = anon_sym_BQUOTE;
	v->a[140889] = actions(8301);
	v->a[140890] = 1;
	v->a[140891] = anon_sym_DOLLAR_BQUOTE;
	v->a[140892] = actions(8304);
	v->a[140893] = 1;
	v->a[140894] = sym_heredoc_content;
	v->a[140895] = actions(8307);
	v->a[140896] = 1;
	v->a[140897] = sym_heredoc_end;
	v->a[140898] = state(3194);
	v->a[140899] = 4;
	small_parse_table_7045(v);
}

/* EOF small_parse_table_1408.c */
