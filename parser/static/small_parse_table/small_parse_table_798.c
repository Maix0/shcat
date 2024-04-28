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
	v->a[79800] = sym_process_substitution;
	v->a[79801] = 3;
	v->a[79802] = actions(3);
	v->a[79803] = 1;
	v->a[79804] = sym_comment;
	v->a[79805] = actions(1350);
	v->a[79806] = 7;
	v->a[79807] = sym_file_descriptor;
	v->a[79808] = sym__concat;
	v->a[79809] = sym_variable_name;
	v->a[79810] = sym_test_operator;
	v->a[79811] = sym__brace_start;
	v->a[79812] = ts_builtin_sym_end;
	v->a[79813] = aux_sym_heredoc_redirect_token1;
	v->a[79814] = actions(1348);
	v->a[79815] = 38;
	v->a[79816] = anon_sym_LPAREN_LPAREN;
	v->a[79817] = anon_sym_SEMI;
	v->a[79818] = anon_sym_PIPE_PIPE;
	v->a[79819] = anon_sym_AMP_AMP;
	small_parse_table_3991(v);
}

void	small_parse_table_3991(t_small_parse_table_array *v)
{
	v->a[79820] = anon_sym_PIPE;
	v->a[79821] = anon_sym_AMP;
	v->a[79822] = anon_sym_LT;
	v->a[79823] = anon_sym_GT;
	v->a[79824] = anon_sym_LT_LT;
	v->a[79825] = anon_sym_GT_GT;
	v->a[79826] = anon_sym_SEMI_SEMI;
	v->a[79827] = anon_sym_PIPE_AMP;
	v->a[79828] = anon_sym_AMP_GT;
	v->a[79829] = anon_sym_AMP_GT_GT;
	v->a[79830] = anon_sym_LT_AMP;
	v->a[79831] = anon_sym_GT_AMP;
	v->a[79832] = anon_sym_GT_PIPE;
	v->a[79833] = anon_sym_LT_AMP_DASH;
	v->a[79834] = anon_sym_GT_AMP_DASH;
	v->a[79835] = anon_sym_LT_LT_DASH;
	v->a[79836] = anon_sym_LT_LT_LT;
	v->a[79837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79838] = anon_sym_DOLLAR_LBRACK;
	v->a[79839] = aux_sym_concatenation_token1;
	small_parse_table_3992(v);
}

void	small_parse_table_3992(t_small_parse_table_array *v)
{
	v->a[79840] = anon_sym_DOLLAR;
	v->a[79841] = sym__special_character;
	v->a[79842] = anon_sym_DQUOTE;
	v->a[79843] = sym_raw_string;
	v->a[79844] = sym_ansi_c_string;
	v->a[79845] = aux_sym_number_token1;
	v->a[79846] = aux_sym_number_token2;
	v->a[79847] = anon_sym_DOLLAR_LBRACE;
	v->a[79848] = anon_sym_DOLLAR_LPAREN;
	v->a[79849] = anon_sym_BQUOTE;
	v->a[79850] = anon_sym_DOLLAR_BQUOTE;
	v->a[79851] = anon_sym_LT_LPAREN;
	v->a[79852] = anon_sym_GT_LPAREN;
	v->a[79853] = sym_word;
	v->a[79854] = 3;
	v->a[79855] = actions(3);
	v->a[79856] = 1;
	v->a[79857] = sym_comment;
	v->a[79858] = actions(1338);
	v->a[79859] = 6;
	small_parse_table_3993(v);
}

void	small_parse_table_3993(t_small_parse_table_array *v)
{
	v->a[79860] = sym_file_descriptor;
	v->a[79861] = sym__concat;
	v->a[79862] = sym_variable_name;
	v->a[79863] = sym_test_operator;
	v->a[79864] = sym__brace_start;
	v->a[79865] = aux_sym_heredoc_redirect_token1;
	v->a[79866] = actions(1336);
	v->a[79867] = 39;
	v->a[79868] = anon_sym_LPAREN_LPAREN;
	v->a[79869] = anon_sym_SEMI;
	v->a[79870] = anon_sym_PIPE_PIPE;
	v->a[79871] = anon_sym_AMP_AMP;
	v->a[79872] = anon_sym_PIPE;
	v->a[79873] = anon_sym_AMP;
	v->a[79874] = anon_sym_LT;
	v->a[79875] = anon_sym_GT;
	v->a[79876] = anon_sym_LT_LT;
	v->a[79877] = anon_sym_GT_GT;
	v->a[79878] = anon_sym_RPAREN;
	v->a[79879] = anon_sym_SEMI_SEMI;
	small_parse_table_3994(v);
}

void	small_parse_table_3994(t_small_parse_table_array *v)
{
	v->a[79880] = anon_sym_PIPE_AMP;
	v->a[79881] = anon_sym_AMP_GT;
	v->a[79882] = anon_sym_AMP_GT_GT;
	v->a[79883] = anon_sym_LT_AMP;
	v->a[79884] = anon_sym_GT_AMP;
	v->a[79885] = anon_sym_GT_PIPE;
	v->a[79886] = anon_sym_LT_AMP_DASH;
	v->a[79887] = anon_sym_GT_AMP_DASH;
	v->a[79888] = anon_sym_LT_LT_DASH;
	v->a[79889] = anon_sym_LT_LT_LT;
	v->a[79890] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79891] = anon_sym_DOLLAR_LBRACK;
	v->a[79892] = aux_sym_concatenation_token1;
	v->a[79893] = anon_sym_DOLLAR;
	v->a[79894] = sym__special_character;
	v->a[79895] = anon_sym_DQUOTE;
	v->a[79896] = sym_raw_string;
	v->a[79897] = sym_ansi_c_string;
	v->a[79898] = aux_sym_number_token1;
	v->a[79899] = aux_sym_number_token2;
	small_parse_table_3995(v);
}

/* EOF small_parse_table_798.c */
