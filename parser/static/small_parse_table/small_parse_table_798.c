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
	v->a[79800] = anon_sym_DOLLAR;
	v->a[79801] = actions(1694);
	v->a[79802] = 1;
	v->a[79803] = anon_sym_DQUOTE;
	v->a[79804] = actions(1696);
	v->a[79805] = 1;
	v->a[79806] = anon_sym_DOLLAR_LBRACE;
	v->a[79807] = actions(1698);
	v->a[79808] = 1;
	v->a[79809] = anon_sym_DOLLAR_LPAREN;
	v->a[79810] = actions(1700);
	v->a[79811] = 1;
	v->a[79812] = anon_sym_BQUOTE;
	v->a[79813] = state(770);
	v->a[79814] = 2;
	v->a[79815] = sym_concatenation;
	v->a[79816] = aux_sym_for_statement_repeat1;
	v->a[79817] = actions(1688);
	v->a[79818] = 3;
	v->a[79819] = sym_raw_string;
	small_parse_table_3991(v);
}

void	small_parse_table_3991(t_small_parse_table_array *v)
{
	v->a[79820] = sym_number;
	v->a[79821] = sym_word;
	v->a[79822] = state(1003);
	v->a[79823] = 5;
	v->a[79824] = sym_arithmetic_expansion;
	v->a[79825] = sym_string;
	v->a[79826] = sym_simple_expansion;
	v->a[79827] = sym_expansion;
	v->a[79828] = sym_command_substitution;
	v->a[79829] = 9;
	v->a[79830] = actions(754);
	v->a[79831] = 1;
	v->a[79832] = anon_sym_LT_LT;
	v->a[79833] = actions(870);
	v->a[79834] = 1;
	v->a[79835] = sym_comment;
	v->a[79836] = actions(2031);
	v->a[79837] = 1;
	v->a[79838] = sym_file_descriptor;
	v->a[79839] = actions(3057);
	small_parse_table_3992(v);
}

void	small_parse_table_3992(t_small_parse_table_array *v)
{
	v->a[79840] = 1;
	v->a[79841] = anon_sym_LT_LT_DASH;
	v->a[79842] = actions(3092);
	v->a[79843] = 2;
	v->a[79844] = anon_sym_AMP_AMP;
	v->a[79845] = anon_sym_PIPE_PIPE;
	v->a[79846] = actions(3094);
	v->a[79847] = 2;
	v->a[79848] = anon_sym_GT_GT;
	v->a[79849] = anon_sym_GT_PIPE;
	v->a[79850] = actions(3096);
	v->a[79851] = 2;
	v->a[79852] = anon_sym_LT_AMP_DASH;
	v->a[79853] = anon_sym_GT_AMP_DASH;
	v->a[79854] = state(1160);
	v->a[79855] = 3;
	v->a[79856] = sym_file_redirect;
	v->a[79857] = sym_heredoc_redirect;
	v->a[79858] = aux_sym_redirected_statement_repeat1;
	v->a[79859] = actions(2025);
	small_parse_table_3993(v);
}

void	small_parse_table_3993(t_small_parse_table_array *v)
{
	v->a[79860] = 4;
	v->a[79861] = anon_sym_LT;
	v->a[79862] = anon_sym_GT;
	v->a[79863] = anon_sym_LT_AMP;
	v->a[79864] = anon_sym_GT_AMP;
	v->a[79865] = 3;
	v->a[79866] = actions(870);
	v->a[79867] = 1;
	v->a[79868] = sym_comment;
	v->a[79869] = actions(1189);
	v->a[79870] = 6;
	v->a[79871] = anon_sym_PIPE;
	v->a[79872] = anon_sym_LT;
	v->a[79873] = anon_sym_GT;
	v->a[79874] = anon_sym_LT_AMP;
	v->a[79875] = anon_sym_GT_AMP;
	v->a[79876] = anon_sym_LT_LT;
	v->a[79877] = actions(1194);
	v->a[79878] = 10;
	v->a[79879] = sym_file_descriptor;
	small_parse_table_3994(v);
}

void	small_parse_table_3994(t_small_parse_table_array *v)
{
	v->a[79880] = sym__concat;
	v->a[79881] = anon_sym_AMP_AMP;
	v->a[79882] = anon_sym_PIPE_PIPE;
	v->a[79883] = anon_sym_GT_GT;
	v->a[79884] = anon_sym_GT_PIPE;
	v->a[79885] = anon_sym_LT_AMP_DASH;
	v->a[79886] = anon_sym_GT_AMP_DASH;
	v->a[79887] = anon_sym_LT_LT_DASH;
	v->a[79888] = aux_sym_concatenation_token1;
	v->a[79889] = 10;
	v->a[79890] = actions(3);
	v->a[79891] = 1;
	v->a[79892] = sym_comment;
	v->a[79893] = actions(2587);
	v->a[79894] = 1;
	v->a[79895] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79896] = actions(2591);
	v->a[79897] = 1;
	v->a[79898] = anon_sym_DQUOTE;
	v->a[79899] = actions(2593);
	small_parse_table_3995(v);
}

/* EOF small_parse_table_798.c */
