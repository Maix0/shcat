/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2958.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14790(t_small_parse_table_array *v)
{
	v->a[295800] = actions(13060);
	v->a[295801] = 1;
	v->a[295802] = anon_sym_DOLLAR_LBRACK;
	v->a[295803] = actions(13066);
	v->a[295804] = 1;
	v->a[295805] = sym_string_content;
	v->a[295806] = actions(13068);
	v->a[295807] = 1;
	v->a[295808] = anon_sym_DOLLAR_LBRACE;
	v->a[295809] = actions(13070);
	v->a[295810] = 1;
	v->a[295811] = anon_sym_DOLLAR_LPAREN;
	v->a[295812] = actions(13072);
	v->a[295813] = 1;
	v->a[295814] = anon_sym_BQUOTE;
	v->a[295815] = actions(13074);
	v->a[295816] = 1;
	v->a[295817] = anon_sym_DOLLAR_BQUOTE;
	v->a[295818] = actions(13232);
	v->a[295819] = 1;
	small_parse_table_14791(v);
}

void	small_parse_table_14791(t_small_parse_table_array *v)
{
	v->a[295820] = anon_sym_DOLLAR;
	v->a[295821] = actions(13234);
	v->a[295822] = 1;
	v->a[295823] = anon_sym_DQUOTE;
	v->a[295824] = state(5749);
	v->a[295825] = 1;
	v->a[295826] = aux_sym_string_repeat1;
	v->a[295827] = actions(13058);
	v->a[295828] = 2;
	v->a[295829] = anon_sym_LPAREN_LPAREN;
	v->a[295830] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295831] = state(6127);
	v->a[295832] = 4;
	v->a[295833] = sym_arithmetic_expansion;
	v->a[295834] = sym_simple_expansion;
	v->a[295835] = sym_expansion;
	v->a[295836] = sym_command_substitution;
	v->a[295837] = 3;
	v->a[295838] = actions(3);
	v->a[295839] = 1;
	small_parse_table_14792(v);
}

void	small_parse_table_14792(t_small_parse_table_array *v)
{
	v->a[295840] = sym_comment;
	v->a[295841] = actions(4372);
	v->a[295842] = 2;
	v->a[295843] = sym_file_descriptor;
	v->a[295844] = aux_sym_heredoc_redirect_token1;
	v->a[295845] = actions(4370);
	v->a[295846] = 13;
	v->a[295847] = anon_sym_PIPE_PIPE;
	v->a[295848] = anon_sym_AMP_AMP;
	v->a[295849] = anon_sym_LT;
	v->a[295850] = anon_sym_GT;
	v->a[295851] = anon_sym_GT_GT;
	v->a[295852] = anon_sym_AMP_GT;
	v->a[295853] = anon_sym_AMP_GT_GT;
	v->a[295854] = anon_sym_LT_AMP;
	v->a[295855] = anon_sym_GT_AMP;
	v->a[295856] = anon_sym_GT_PIPE;
	v->a[295857] = anon_sym_LT_AMP_DASH;
	v->a[295858] = anon_sym_GT_AMP_DASH;
	v->a[295859] = anon_sym_LT_LT_LT;
	small_parse_table_14793(v);
}

void	small_parse_table_14793(t_small_parse_table_array *v)
{
	v->a[295860] = 12;
	v->a[295861] = actions(3);
	v->a[295862] = 1;
	v->a[295863] = sym_comment;
	v->a[295864] = actions(13060);
	v->a[295865] = 1;
	v->a[295866] = anon_sym_DOLLAR_LBRACK;
	v->a[295867] = actions(13066);
	v->a[295868] = 1;
	v->a[295869] = sym_string_content;
	v->a[295870] = actions(13068);
	v->a[295871] = 1;
	v->a[295872] = anon_sym_DOLLAR_LBRACE;
	v->a[295873] = actions(13070);
	v->a[295874] = 1;
	v->a[295875] = anon_sym_DOLLAR_LPAREN;
	v->a[295876] = actions(13072);
	v->a[295877] = 1;
	v->a[295878] = anon_sym_BQUOTE;
	v->a[295879] = actions(13074);
	small_parse_table_14794(v);
}

void	small_parse_table_14794(t_small_parse_table_array *v)
{
	v->a[295880] = 1;
	v->a[295881] = anon_sym_DOLLAR_BQUOTE;
	v->a[295882] = actions(13236);
	v->a[295883] = 1;
	v->a[295884] = anon_sym_DOLLAR;
	v->a[295885] = actions(13238);
	v->a[295886] = 1;
	v->a[295887] = anon_sym_DQUOTE;
	v->a[295888] = state(5768);
	v->a[295889] = 1;
	v->a[295890] = aux_sym_string_repeat1;
	v->a[295891] = actions(13058);
	v->a[295892] = 2;
	v->a[295893] = anon_sym_LPAREN_LPAREN;
	v->a[295894] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295895] = state(6127);
	v->a[295896] = 4;
	v->a[295897] = sym_arithmetic_expansion;
	v->a[295898] = sym_simple_expansion;
	v->a[295899] = sym_expansion;
	small_parse_table_14795(v);
}

/* EOF small_parse_table_2958.c */
