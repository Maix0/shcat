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
	v->a[37800] = actions(3);
	v->a[37801] = 1;
	v->a[37802] = sym_comment;
	v->a[37803] = actions(796);
	v->a[37804] = 3;
	v->a[37805] = sym_file_descriptor;
	v->a[37806] = sym__concat;
	v->a[37807] = sym__bare_dollar;
	v->a[37808] = actions(794);
	v->a[37809] = 27;
	v->a[37810] = anon_sym_PIPE;
	v->a[37811] = anon_sym_RPAREN;
	v->a[37812] = anon_sym_SEMI_SEMI;
	v->a[37813] = anon_sym_AMP_AMP;
	v->a[37814] = anon_sym_PIPE_PIPE;
	v->a[37815] = anon_sym_LT;
	v->a[37816] = anon_sym_GT;
	v->a[37817] = anon_sym_GT_GT;
	v->a[37818] = anon_sym_LT_AMP;
	v->a[37819] = anon_sym_GT_AMP;
	small_parse_table_1891(v);
}

void	small_parse_table_1891(t_small_parse_table_array *v)
{
	v->a[37820] = anon_sym_GT_PIPE;
	v->a[37821] = anon_sym_LT_GT;
	v->a[37822] = anon_sym_LT_LT;
	v->a[37823] = anon_sym_LT_LT_DASH;
	v->a[37824] = aux_sym_heredoc_redirect_token1;
	v->a[37825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37826] = anon_sym_AMP;
	v->a[37827] = aux_sym_concatenation_token1;
	v->a[37828] = anon_sym_DOLLAR;
	v->a[37829] = anon_sym_DQUOTE;
	v->a[37830] = sym_raw_string;
	v->a[37831] = sym_number;
	v->a[37832] = anon_sym_DOLLAR_LBRACE;
	v->a[37833] = anon_sym_DOLLAR_LPAREN;
	v->a[37834] = anon_sym_BQUOTE;
	v->a[37835] = sym_word;
	v->a[37836] = anon_sym_SEMI;
	v->a[37837] = 3;
	v->a[37838] = actions(3);
	v->a[37839] = 1;
	small_parse_table_1892(v);
}

void	small_parse_table_1892(t_small_parse_table_array *v)
{
	v->a[37840] = sym_comment;
	v->a[37841] = actions(792);
	v->a[37842] = 3;
	v->a[37843] = sym_file_descriptor;
	v->a[37844] = sym__concat;
	v->a[37845] = sym_variable_name;
	v->a[37846] = actions(790);
	v->a[37847] = 27;
	v->a[37848] = anon_sym_PIPE;
	v->a[37849] = anon_sym_RPAREN;
	v->a[37850] = anon_sym_SEMI_SEMI;
	v->a[37851] = anon_sym_AMP_AMP;
	v->a[37852] = anon_sym_PIPE_PIPE;
	v->a[37853] = anon_sym_LT;
	v->a[37854] = anon_sym_GT;
	v->a[37855] = anon_sym_GT_GT;
	v->a[37856] = anon_sym_LT_AMP;
	v->a[37857] = anon_sym_GT_AMP;
	v->a[37858] = anon_sym_GT_PIPE;
	v->a[37859] = anon_sym_LT_GT;
	small_parse_table_1893(v);
}

void	small_parse_table_1893(t_small_parse_table_array *v)
{
	v->a[37860] = anon_sym_LT_LT;
	v->a[37861] = anon_sym_LT_LT_DASH;
	v->a[37862] = aux_sym_heredoc_redirect_token1;
	v->a[37863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37864] = anon_sym_AMP;
	v->a[37865] = aux_sym_concatenation_token1;
	v->a[37866] = anon_sym_DOLLAR;
	v->a[37867] = anon_sym_DQUOTE;
	v->a[37868] = sym_raw_string;
	v->a[37869] = sym_number;
	v->a[37870] = anon_sym_DOLLAR_LBRACE;
	v->a[37871] = anon_sym_DOLLAR_LPAREN;
	v->a[37872] = anon_sym_BQUOTE;
	v->a[37873] = sym_word;
	v->a[37874] = anon_sym_SEMI;
	v->a[37875] = 5;
	v->a[37876] = actions(3);
	v->a[37877] = 1;
	v->a[37878] = sym_comment;
	v->a[37879] = actions(515);
	small_parse_table_1894(v);
}

void	small_parse_table_1894(t_small_parse_table_array *v)
{
	v->a[37880] = 2;
	v->a[37881] = sym_file_descriptor;
	v->a[37882] = sym_variable_name;
	v->a[37883] = state(555);
	v->a[37884] = 2;
	v->a[37885] = sym_concatenation;
	v->a[37886] = aux_sym_for_statement_repeat1;
	v->a[37887] = state(802);
	v->a[37888] = 5;
	v->a[37889] = sym_arithmetic_expansion;
	v->a[37890] = sym_string;
	v->a[37891] = sym_simple_expansion;
	v->a[37892] = sym_expansion;
	v->a[37893] = sym_command_substitution;
	v->a[37894] = actions(513);
	v->a[37895] = 21;
	v->a[37896] = anon_sym_PIPE;
	v->a[37897] = anon_sym_AMP_AMP;
	v->a[37898] = anon_sym_PIPE_PIPE;
	v->a[37899] = anon_sym_LT;
	small_parse_table_1895(v);
}

/* EOF small_parse_table_378.c */
