/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_798.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3990(t_small_parse_table_array *v)
{
	v->a[79800] = actions(1021);
	v->a[79801] = 1;
	v->a[79802] = aux_sym_number_token1;
	v->a[79803] = actions(1023);
	v->a[79804] = 1;
	v->a[79805] = aux_sym_number_token2;
	v->a[79806] = actions(1025);
	v->a[79807] = 1;
	v->a[79808] = anon_sym_DOLLAR_LBRACE;
	v->a[79809] = actions(1027);
	v->a[79810] = 1;
	v->a[79811] = anon_sym_DOLLAR_LPAREN;
	v->a[79812] = actions(1029);
	v->a[79813] = 1;
	v->a[79814] = anon_sym_BQUOTE;
	v->a[79815] = actions(3302);
	v->a[79816] = 1;
	v->a[79817] = anon_sym_DOLLAR;
	v->a[79818] = actions(3304);
	v->a[79819] = 1;
	small_parse_table_3991(v);
}

void	small_parse_table_3991(t_small_parse_table_array *v)
{
	v->a[79820] = sym__bare_dollar;
	v->a[79821] = actions(3300);
	v->a[79822] = 3;
	v->a[79823] = sym_raw_string;
	v->a[79824] = sym__comment_word;
	v->a[79825] = sym_word;
	v->a[79826] = state(831);
	v->a[79827] = 6;
	v->a[79828] = sym_arithmetic_expansion;
	v->a[79829] = sym_string;
	v->a[79830] = sym_number;
	v->a[79831] = sym_simple_expansion;
	v->a[79832] = sym_expansion;
	v->a[79833] = sym_command_substitution;
	v->a[79834] = 12;
	v->a[79835] = actions(3);
	v->a[79836] = 1;
	v->a[79837] = sym_comment;
	v->a[79838] = actions(527);
	v->a[79839] = 1;
	small_parse_table_3992(v);
}

void	small_parse_table_3992(t_small_parse_table_array *v)
{
	v->a[79840] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79841] = actions(531);
	v->a[79842] = 1;
	v->a[79843] = anon_sym_DQUOTE;
	v->a[79844] = actions(533);
	v->a[79845] = 1;
	v->a[79846] = aux_sym_number_token1;
	v->a[79847] = actions(535);
	v->a[79848] = 1;
	v->a[79849] = aux_sym_number_token2;
	v->a[79850] = actions(537);
	v->a[79851] = 1;
	v->a[79852] = anon_sym_DOLLAR_LBRACE;
	v->a[79853] = actions(539);
	v->a[79854] = 1;
	v->a[79855] = anon_sym_DOLLAR_LPAREN;
	v->a[79856] = actions(541);
	v->a[79857] = 1;
	v->a[79858] = anon_sym_BQUOTE;
	v->a[79859] = actions(3292);
	small_parse_table_3993(v);
}

void	small_parse_table_3993(t_small_parse_table_array *v)
{
	v->a[79860] = 1;
	v->a[79861] = sym__bare_dollar;
	v->a[79862] = actions(3306);
	v->a[79863] = 1;
	v->a[79864] = anon_sym_DOLLAR;
	v->a[79865] = actions(3290);
	v->a[79866] = 3;
	v->a[79867] = sym_raw_string;
	v->a[79868] = sym__comment_word;
	v->a[79869] = sym_word;
	v->a[79870] = state(425);
	v->a[79871] = 6;
	v->a[79872] = sym_arithmetic_expansion;
	v->a[79873] = sym_string;
	v->a[79874] = sym_number;
	v->a[79875] = sym_simple_expansion;
	v->a[79876] = sym_expansion;
	v->a[79877] = sym_command_substitution;
	v->a[79878] = 12;
	v->a[79879] = actions(3);
	small_parse_table_3994(v);
}

void	small_parse_table_3994(t_small_parse_table_array *v)
{
	v->a[79880] = 1;
	v->a[79881] = sym_comment;
	v->a[79882] = actions(1015);
	v->a[79883] = 1;
	v->a[79884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79885] = actions(1017);
	v->a[79886] = 1;
	v->a[79887] = anon_sym_DOLLAR;
	v->a[79888] = actions(1019);
	v->a[79889] = 1;
	v->a[79890] = anon_sym_DQUOTE;
	v->a[79891] = actions(1021);
	v->a[79892] = 1;
	v->a[79893] = aux_sym_number_token1;
	v->a[79894] = actions(1023);
	v->a[79895] = 1;
	v->a[79896] = aux_sym_number_token2;
	v->a[79897] = actions(1025);
	v->a[79898] = 1;
	v->a[79899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3995(v);
}

/* EOF small_parse_table_798.c */
