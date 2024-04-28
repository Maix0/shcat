/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_378.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1890(t_small_parse_table_array *v)
{
	v->a[37800] = actions(3580);
	v->a[37801] = 1;
	v->a[37802] = anon_sym_DQUOTE;
	v->a[37803] = actions(3610);
	v->a[37804] = 1;
	v->a[37805] = anon_sym_DOLLAR_LBRACK;
	v->a[37806] = actions(3612);
	v->a[37807] = 1;
	v->a[37808] = anon_sym_DOLLAR;
	v->a[37809] = actions(3616);
	v->a[37810] = 1;
	v->a[37811] = aux_sym_number_token1;
	v->a[37812] = actions(3618);
	v->a[37813] = 1;
	v->a[37814] = aux_sym_number_token2;
	v->a[37815] = actions(3620);
	v->a[37816] = 1;
	v->a[37817] = anon_sym_DOLLAR_LBRACE;
	v->a[37818] = actions(3622);
	v->a[37819] = 1;
	small_parse_table_1891(v);
}

void	small_parse_table_1891(t_small_parse_table_array *v)
{
	v->a[37820] = anon_sym_DOLLAR_LPAREN;
	v->a[37821] = actions(3624);
	v->a[37822] = 1;
	v->a[37823] = anon_sym_BQUOTE;
	v->a[37824] = actions(3626);
	v->a[37825] = 1;
	v->a[37826] = anon_sym_DOLLAR_BQUOTE;
	v->a[37827] = actions(3632);
	v->a[37828] = 1;
	v->a[37829] = sym__brace_start;
	v->a[37830] = actions(4977);
	v->a[37831] = 1;
	v->a[37832] = sym__special_character;
	v->a[37833] = actions(4979);
	v->a[37834] = 1;
	v->a[37835] = sym_test_operator;
	v->a[37836] = state(2270);
	v->a[37837] = 1;
	v->a[37838] = aux_sym__literal_repeat1;
	v->a[37839] = actions(2074);
	small_parse_table_1892(v);
}

void	small_parse_table_1892(t_small_parse_table_array *v)
{
	v->a[37840] = 2;
	v->a[37841] = sym_file_descriptor;
	v->a[37842] = aux_sym_heredoc_redirect_token1;
	v->a[37843] = actions(3608);
	v->a[37844] = 2;
	v->a[37845] = anon_sym_LPAREN_LPAREN;
	v->a[37846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37847] = actions(3628);
	v->a[37848] = 2;
	v->a[37849] = anon_sym_LT_LPAREN;
	v->a[37850] = anon_sym_GT_LPAREN;
	v->a[37851] = state(976);
	v->a[37852] = 2;
	v->a[37853] = sym_concatenation;
	v->a[37854] = aux_sym_for_statement_repeat1;
	v->a[37855] = actions(4975);
	v->a[37856] = 3;
	v->a[37857] = sym_raw_string;
	v->a[37858] = sym_ansi_c_string;
	v->a[37859] = sym_word;
	small_parse_table_1893(v);
}

void	small_parse_table_1893(t_small_parse_table_array *v)
{
	v->a[37860] = state(2572);
	v->a[37861] = 9;
	v->a[37862] = sym_arithmetic_expansion;
	v->a[37863] = sym_brace_expression;
	v->a[37864] = sym_string;
	v->a[37865] = sym_translated_string;
	v->a[37866] = sym_number;
	v->a[37867] = sym_simple_expansion;
	v->a[37868] = sym_expansion;
	v->a[37869] = sym_command_substitution;
	v->a[37870] = sym_process_substitution;
	v->a[37871] = actions(2072);
	v->a[37872] = 16;
	v->a[37873] = anon_sym_PIPE_PIPE;
	v->a[37874] = anon_sym_AMP_AMP;
	v->a[37875] = anon_sym_PIPE;
	v->a[37876] = anon_sym_LT;
	v->a[37877] = anon_sym_GT;
	v->a[37878] = anon_sym_LT_LT;
	v->a[37879] = anon_sym_GT_GT;
	small_parse_table_1894(v);
}

void	small_parse_table_1894(t_small_parse_table_array *v)
{
	v->a[37880] = anon_sym_PIPE_AMP;
	v->a[37881] = anon_sym_AMP_GT;
	v->a[37882] = anon_sym_AMP_GT_GT;
	v->a[37883] = anon_sym_LT_AMP;
	v->a[37884] = anon_sym_GT_AMP;
	v->a[37885] = anon_sym_GT_PIPE;
	v->a[37886] = anon_sym_LT_AMP_DASH;
	v->a[37887] = anon_sym_GT_AMP_DASH;
	v->a[37888] = anon_sym_LT_LT_DASH;
	v->a[37889] = 6;
	v->a[37890] = actions(3);
	v->a[37891] = 1;
	v->a[37892] = sym_comment;
	v->a[37893] = actions(4933);
	v->a[37894] = 1;
	v->a[37895] = aux_sym_concatenation_token1;
	v->a[37896] = actions(4981);
	v->a[37897] = 1;
	v->a[37898] = sym__concat;
	v->a[37899] = state(970);
	small_parse_table_1895(v);
}

/* EOF small_parse_table_378.c */
