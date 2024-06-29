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
	v->a[37800] = anon_sym_esac;
	v->a[37801] = anon_sym_PIPE;
	v->a[37802] = anon_sym_SEMI_SEMI;
	v->a[37803] = anon_sym_AMP_AMP;
	v->a[37804] = anon_sym_PIPE_PIPE;
	v->a[37805] = anon_sym_LT;
	v->a[37806] = anon_sym_GT;
	v->a[37807] = anon_sym_GT_GT;
	v->a[37808] = anon_sym_AMP_GT;
	v->a[37809] = anon_sym_AMP_GT_GT;
	v->a[37810] = anon_sym_LT_AMP;
	v->a[37811] = anon_sym_GT_AMP;
	v->a[37812] = anon_sym_GT_PIPE;
	v->a[37813] = anon_sym_LT_AMP_DASH;
	v->a[37814] = anon_sym_GT_AMP_DASH;
	v->a[37815] = anon_sym_LT_LT;
	v->a[37816] = anon_sym_LT_LT_DASH;
	v->a[37817] = aux_sym_heredoc_redirect_token1;
	v->a[37818] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37819] = anon_sym_AMP;
	small_parse_table_1891(v);
}

void	small_parse_table_1891(t_small_parse_table_array *v)
{
	v->a[37820] = aux_sym_concatenation_token1;
	v->a[37821] = anon_sym_DOLLAR;
	v->a[37822] = anon_sym_DQUOTE;
	v->a[37823] = sym_raw_string;
	v->a[37824] = sym_number;
	v->a[37825] = anon_sym_DOLLAR_LBRACE;
	v->a[37826] = anon_sym_DOLLAR_LPAREN;
	v->a[37827] = anon_sym_BQUOTE;
	v->a[37828] = sym_word;
	v->a[37829] = anon_sym_SEMI;
	v->a[37830] = 6;
	v->a[37831] = actions(3);
	v->a[37832] = 1;
	v->a[37833] = sym_comment;
	v->a[37834] = actions(1092);
	v->a[37835] = 1;
	v->a[37836] = aux_sym_concatenation_token1;
	v->a[37837] = actions(1386);
	v->a[37838] = 1;
	v->a[37839] = sym__concat;
	small_parse_table_1892(v);
}

void	small_parse_table_1892(t_small_parse_table_array *v)
{
	v->a[37840] = state(338);
	v->a[37841] = 1;
	v->a[37842] = aux_sym_concatenation_repeat1;
	v->a[37843] = actions(961);
	v->a[37844] = 2;
	v->a[37845] = sym_file_descriptor;
	v->a[37846] = sym_variable_name;
	v->a[37847] = actions(957);
	v->a[37848] = 28;
	v->a[37849] = anon_sym_PIPE;
	v->a[37850] = anon_sym_SEMI_SEMI;
	v->a[37851] = anon_sym_AMP_AMP;
	v->a[37852] = anon_sym_PIPE_PIPE;
	v->a[37853] = anon_sym_LT;
	v->a[37854] = anon_sym_GT;
	v->a[37855] = anon_sym_GT_GT;
	v->a[37856] = anon_sym_AMP_GT;
	v->a[37857] = anon_sym_AMP_GT_GT;
	v->a[37858] = anon_sym_LT_AMP;
	v->a[37859] = anon_sym_GT_AMP;
	small_parse_table_1893(v);
}

void	small_parse_table_1893(t_small_parse_table_array *v)
{
	v->a[37860] = anon_sym_GT_PIPE;
	v->a[37861] = anon_sym_LT_AMP_DASH;
	v->a[37862] = anon_sym_GT_AMP_DASH;
	v->a[37863] = anon_sym_LT_LT;
	v->a[37864] = anon_sym_LT_LT_DASH;
	v->a[37865] = aux_sym_heredoc_redirect_token1;
	v->a[37866] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37867] = anon_sym_AMP;
	v->a[37868] = anon_sym_DOLLAR;
	v->a[37869] = anon_sym_DQUOTE;
	v->a[37870] = sym_raw_string;
	v->a[37871] = sym_number;
	v->a[37872] = anon_sym_DOLLAR_LBRACE;
	v->a[37873] = anon_sym_DOLLAR_LPAREN;
	v->a[37874] = anon_sym_BQUOTE;
	v->a[37875] = sym_word;
	v->a[37876] = anon_sym_SEMI;
	v->a[37877] = 6;
	v->a[37878] = actions(3);
	v->a[37879] = 1;
	small_parse_table_1894(v);
}

void	small_parse_table_1894(t_small_parse_table_array *v)
{
	v->a[37880] = sym_comment;
	v->a[37881] = actions(1092);
	v->a[37882] = 1;
	v->a[37883] = aux_sym_concatenation_token1;
	v->a[37884] = actions(1096);
	v->a[37885] = 1;
	v->a[37886] = sym__concat;
	v->a[37887] = state(500);
	v->a[37888] = 1;
	v->a[37889] = aux_sym_concatenation_repeat1;
	v->a[37890] = actions(548);
	v->a[37891] = 2;
	v->a[37892] = sym_file_descriptor;
	v->a[37893] = sym_variable_name;
	v->a[37894] = actions(546);
	v->a[37895] = 28;
	v->a[37896] = anon_sym_PIPE;
	v->a[37897] = anon_sym_SEMI_SEMI;
	v->a[37898] = anon_sym_AMP_AMP;
	v->a[37899] = anon_sym_PIPE_PIPE;
	small_parse_table_1895(v);
}

/* EOF small_parse_table_378.c */
