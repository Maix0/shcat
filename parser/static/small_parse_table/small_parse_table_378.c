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
	v->a[37800] = anon_sym_BQUOTE;
	v->a[37801] = actions(1353);
	v->a[37802] = 1;
	v->a[37803] = sym_extglob_pattern;
	v->a[37804] = actions(1430);
	v->a[37805] = 1;
	v->a[37806] = anon_sym_esac;
	v->a[37807] = state(764);
	v->a[37808] = 1;
	v->a[37809] = sym_terminator;
	v->a[37810] = state(811);
	v->a[37811] = 1;
	v->a[37812] = aux_sym_case_statement_repeat1;
	v->a[37813] = state(1432);
	v->a[37814] = 1;
	v->a[37815] = sym_case_item;
	v->a[37816] = state(1793);
	v->a[37817] = 1;
	v->a[37818] = sym__case_item_last;
	v->a[37819] = state(1594);
	small_parse_table_1891(v);
}

void	small_parse_table_1891(t_small_parse_table_array *v)
{
	v->a[37820] = 2;
	v->a[37821] = sym_concatenation;
	v->a[37822] = sym__extglob_blob;
	v->a[37823] = actions(1333);
	v->a[37824] = 3;
	v->a[37825] = sym_raw_string;
	v->a[37826] = sym_number;
	v->a[37827] = sym_word;
	v->a[37828] = actions(1339);
	v->a[37829] = 3;
	v->a[37830] = anon_sym_SEMI_SEMI;
	v->a[37831] = aux_sym_heredoc_redirect_token1;
	v->a[37832] = anon_sym_SEMI;
	v->a[37833] = state(1520);
	v->a[37834] = 5;
	v->a[37835] = sym_arithmetic_expansion;
	v->a[37836] = sym_string;
	v->a[37837] = sym_simple_expansion;
	v->a[37838] = sym_expansion;
	v->a[37839] = sym_command_substitution;
	small_parse_table_1892(v);
}

void	small_parse_table_1892(t_small_parse_table_array *v)
{
	v->a[37840] = 3;
	v->a[37841] = actions(3);
	v->a[37842] = 1;
	v->a[37843] = sym_comment;
	v->a[37844] = actions(1177);
	v->a[37845] = 1;
	v->a[37846] = sym_variable_name;
	v->a[37847] = actions(1175);
	v->a[37848] = 25;
	v->a[37849] = anon_sym_for;
	v->a[37850] = anon_sym_while;
	v->a[37851] = anon_sym_until;
	v->a[37852] = anon_sym_do;
	v->a[37853] = anon_sym_if;
	v->a[37854] = anon_sym_case;
	v->a[37855] = anon_sym_LPAREN;
	v->a[37856] = anon_sym_LBRACE;
	v->a[37857] = anon_sym_BANG;
	v->a[37858] = anon_sym_LT;
	v->a[37859] = anon_sym_GT;
	small_parse_table_1893(v);
}

void	small_parse_table_1893(t_small_parse_table_array *v)
{
	v->a[37860] = anon_sym_GT_GT;
	v->a[37861] = anon_sym_LT_AMP;
	v->a[37862] = anon_sym_GT_AMP;
	v->a[37863] = anon_sym_GT_PIPE;
	v->a[37864] = anon_sym_LT_GT;
	v->a[37865] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37866] = anon_sym_DOLLAR;
	v->a[37867] = anon_sym_DQUOTE;
	v->a[37868] = sym_raw_string;
	v->a[37869] = sym_number;
	v->a[37870] = anon_sym_DOLLAR_LBRACE;
	v->a[37871] = anon_sym_DOLLAR_LPAREN;
	v->a[37872] = anon_sym_BQUOTE;
	v->a[37873] = sym_word;
	v->a[37874] = 6;
	v->a[37875] = actions(3);
	v->a[37876] = 1;
	v->a[37877] = sym_comment;
	v->a[37878] = actions(1289);
	v->a[37879] = 1;
	small_parse_table_1894(v);
}

void	small_parse_table_1894(t_small_parse_table_array *v)
{
	v->a[37880] = sym_variable_name;
	v->a[37881] = actions(1432);
	v->a[37882] = 1;
	v->a[37883] = anon_sym_RPAREN;
	v->a[37884] = actions(1286);
	v->a[37885] = 7;
	v->a[37886] = anon_sym_LT;
	v->a[37887] = anon_sym_GT;
	v->a[37888] = anon_sym_GT_GT;
	v->a[37889] = anon_sym_LT_AMP;
	v->a[37890] = anon_sym_GT_AMP;
	v->a[37891] = anon_sym_GT_PIPE;
	v->a[37892] = anon_sym_LT_GT;
	v->a[37893] = actions(1281);
	v->a[37894] = 8;
	v->a[37895] = anon_sym_PIPE;
	v->a[37896] = anon_sym_SEMI_SEMI;
	v->a[37897] = anon_sym_AMP_AMP;
	v->a[37898] = anon_sym_PIPE_PIPE;
	v->a[37899] = anon_sym_LT_LT;
	small_parse_table_1895(v);
}

/* EOF small_parse_table_378.c */
