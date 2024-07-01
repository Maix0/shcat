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
	v->a[79800] = sym_regex;
	v->a[79801] = state(1735);
	v->a[79802] = 2;
	v->a[79803] = sym_string;
	v->a[79804] = aux_sym_expansion_regex_repeat1;
	v->a[79805] = 6;
	v->a[79806] = actions(3);
	v->a[79807] = 1;
	v->a[79808] = sym_comment;
	v->a[79809] = actions(1093);
	v->a[79810] = 1;
	v->a[79811] = aux_sym_heredoc_redirect_token1;
	v->a[79812] = actions(3533);
	v->a[79813] = 1;
	v->a[79814] = aux_sym_concatenation_token1;
	v->a[79815] = actions(3536);
	v->a[79816] = 1;
	v->a[79817] = sym__concat;
	v->a[79818] = state(1746);
	v->a[79819] = 1;
	small_parse_table_3991(v);
}

void	small_parse_table_3991(t_small_parse_table_array *v)
{
	v->a[79820] = aux_sym_concatenation_repeat1;
	v->a[79821] = actions(1088);
	v->a[79822] = 4;
	v->a[79823] = anon_sym_in;
	v->a[79824] = anon_sym_SEMI_SEMI;
	v->a[79825] = anon_sym_AMP;
	v->a[79826] = anon_sym_SEMI;
	v->a[79827] = 3;
	v->a[79828] = actions(3);
	v->a[79829] = 1;
	v->a[79830] = sym_comment;
	v->a[79831] = actions(895);
	v->a[79832] = 1;
	v->a[79833] = sym__concat;
	v->a[79834] = actions(893);
	v->a[79835] = 7;
	v->a[79836] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79837] = anon_sym_DOLLAR;
	v->a[79838] = anon_sym_DQUOTE;
	v->a[79839] = sym_string_content;
	small_parse_table_3992(v);
}

void	small_parse_table_3992(t_small_parse_table_array *v)
{
	v->a[79840] = anon_sym_DOLLAR_LBRACE;
	v->a[79841] = anon_sym_DOLLAR_LPAREN;
	v->a[79842] = anon_sym_BQUOTE;
	v->a[79843] = 3;
	v->a[79844] = actions(3);
	v->a[79845] = 1;
	v->a[79846] = sym_comment;
	v->a[79847] = actions(753);
	v->a[79848] = 1;
	v->a[79849] = sym__concat;
	v->a[79850] = actions(751);
	v->a[79851] = 7;
	v->a[79852] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79853] = anon_sym_DOLLAR;
	v->a[79854] = anon_sym_DQUOTE;
	v->a[79855] = sym_string_content;
	v->a[79856] = anon_sym_DOLLAR_LBRACE;
	v->a[79857] = anon_sym_DOLLAR_LPAREN;
	v->a[79858] = anon_sym_BQUOTE;
	v->a[79859] = 3;
	small_parse_table_3993(v);
}

void	small_parse_table_3993(t_small_parse_table_array *v)
{
	v->a[79860] = actions(3);
	v->a[79861] = 1;
	v->a[79862] = sym_comment;
	v->a[79863] = actions(662);
	v->a[79864] = 2;
	v->a[79865] = sym__concat;
	v->a[79866] = aux_sym_heredoc_redirect_token1;
	v->a[79867] = actions(660);
	v->a[79868] = 5;
	v->a[79869] = anon_sym_in;
	v->a[79870] = anon_sym_SEMI_SEMI;
	v->a[79871] = anon_sym_AMP;
	v->a[79872] = aux_sym_concatenation_token1;
	v->a[79873] = anon_sym_SEMI;
	v->a[79874] = 3;
	v->a[79875] = actions(664);
	v->a[79876] = 1;
	v->a[79877] = sym_comment;
	v->a[79878] = actions(3539);
	v->a[79879] = 2;
	small_parse_table_3994(v);
}

void	small_parse_table_3994(t_small_parse_table_array *v)
{
	v->a[79880] = anon_sym_LT;
	v->a[79881] = anon_sym_GT;
	v->a[79882] = actions(3541);
	v->a[79883] = 5;
	v->a[79884] = anon_sym_GT_GT;
	v->a[79885] = anon_sym_LT_AMP;
	v->a[79886] = anon_sym_GT_AMP;
	v->a[79887] = anon_sym_GT_PIPE;
	v->a[79888] = anon_sym_LT_GT;
	v->a[79889] = 3;
	v->a[79890] = actions(664);
	v->a[79891] = 1;
	v->a[79892] = sym_comment;
	v->a[79893] = actions(3436);
	v->a[79894] = 2;
	v->a[79895] = anon_sym_LT;
	v->a[79896] = anon_sym_GT;
	v->a[79897] = actions(3438);
	v->a[79898] = 5;
	v->a[79899] = anon_sym_GT_GT;
	small_parse_table_3995(v);
}

/* EOF small_parse_table_798.c */
