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
	v->a[37800] = 1;
	v->a[37801] = anon_sym_BQUOTE;
	v->a[37802] = actions(1585);
	v->a[37803] = 1;
	v->a[37804] = anon_sym_DOLLAR;
	v->a[37805] = actions(1587);
	v->a[37806] = 1;
	v->a[37807] = sym__comment_word;
	v->a[37808] = actions(1589);
	v->a[37809] = 1;
	v->a[37810] = sym__empty_value;
	v->a[37811] = state(950);
	v->a[37812] = 1;
	v->a[37813] = sym_concatenation;
	v->a[37814] = actions(1707);
	v->a[37815] = 3;
	v->a[37816] = sym_raw_string;
	v->a[37817] = sym_number;
	v->a[37818] = sym_word;
	v->a[37819] = state(911);
	small_parse_table_1891(v);
}

void	small_parse_table_1891(t_small_parse_table_array *v)
{
	v->a[37820] = 5;
	v->a[37821] = sym_arithmetic_expansion;
	v->a[37822] = sym_string;
	v->a[37823] = sym_simple_expansion;
	v->a[37824] = sym_expansion;
	v->a[37825] = sym_command_substitution;
	v->a[37826] = 10;
	v->a[37827] = actions(3);
	v->a[37828] = 1;
	v->a[37829] = sym_comment;
	v->a[37830] = actions(1535);
	v->a[37831] = 1;
	v->a[37832] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37833] = actions(1539);
	v->a[37834] = 1;
	v->a[37835] = anon_sym_DQUOTE;
	v->a[37836] = actions(1541);
	v->a[37837] = 1;
	v->a[37838] = anon_sym_DOLLAR_LBRACE;
	v->a[37839] = actions(1543);
	small_parse_table_1892(v);
}

void	small_parse_table_1892(t_small_parse_table_array *v)
{
	v->a[37840] = 1;
	v->a[37841] = anon_sym_DOLLAR_LPAREN;
	v->a[37842] = actions(1545);
	v->a[37843] = 1;
	v->a[37844] = anon_sym_BQUOTE;
	v->a[37845] = actions(1547);
	v->a[37846] = 1;
	v->a[37847] = sym__bare_dollar;
	v->a[37848] = actions(1585);
	v->a[37849] = 1;
	v->a[37850] = anon_sym_DOLLAR;
	v->a[37851] = actions(1533);
	v->a[37852] = 5;
	v->a[37853] = aux_sym_concatenation_token1;
	v->a[37854] = sym_raw_string;
	v->a[37855] = sym_number;
	v->a[37856] = sym__comment_word;
	v->a[37857] = sym_word;
	v->a[37858] = state(778);
	v->a[37859] = 5;
	small_parse_table_1893(v);
}

void	small_parse_table_1893(t_small_parse_table_array *v)
{
	v->a[37860] = sym_arithmetic_expansion;
	v->a[37861] = sym_string;
	v->a[37862] = sym_simple_expansion;
	v->a[37863] = sym_expansion;
	v->a[37864] = sym_command_substitution;
	v->a[37865] = 11;
	v->a[37866] = actions(3);
	v->a[37867] = 1;
	v->a[37868] = sym_comment;
	v->a[37869] = actions(782);
	v->a[37870] = 1;
	v->a[37871] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37872] = actions(784);
	v->a[37873] = 1;
	v->a[37874] = anon_sym_DOLLAR;
	v->a[37875] = actions(786);
	v->a[37876] = 1;
	v->a[37877] = anon_sym_DQUOTE;
	v->a[37878] = actions(788);
	v->a[37879] = 1;
	small_parse_table_1894(v);
}

void	small_parse_table_1894(t_small_parse_table_array *v)
{
	v->a[37880] = anon_sym_DOLLAR_LBRACE;
	v->a[37881] = actions(790);
	v->a[37882] = 1;
	v->a[37883] = anon_sym_DOLLAR_LPAREN;
	v->a[37884] = actions(792);
	v->a[37885] = 1;
	v->a[37886] = anon_sym_BQUOTE;
	v->a[37887] = actions(794);
	v->a[37888] = 1;
	v->a[37889] = sym_extglob_pattern;
	v->a[37890] = state(1542);
	v->a[37891] = 2;
	v->a[37892] = sym_concatenation;
	v->a[37893] = sym__extglob_blob;
	v->a[37894] = actions(1709);
	v->a[37895] = 3;
	v->a[37896] = sym_raw_string;
	v->a[37897] = sym_number;
	v->a[37898] = sym_word;
	v->a[37899] = state(1462);
	small_parse_table_1895(v);
}

/* EOF small_parse_table_378.c */
