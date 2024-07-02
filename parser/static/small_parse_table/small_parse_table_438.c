/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_438.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2190(t_small_parse_table_array *v)
{
	v->a[43800] = anon_sym_for;
	v->a[43801] = anon_sym_while;
	v->a[43802] = anon_sym_until;
	v->a[43803] = anon_sym_if;
	v->a[43804] = anon_sym_case;
	v->a[43805] = anon_sym_esac;
	v->a[43806] = anon_sym_LPAREN;
	v->a[43807] = anon_sym_SEMI_SEMI;
	v->a[43808] = anon_sym_LBRACE;
	v->a[43809] = anon_sym_BANG;
	v->a[43810] = anon_sym_LT;
	v->a[43811] = anon_sym_GT;
	v->a[43812] = anon_sym_GT_GT;
	v->a[43813] = anon_sym_LT_AMP;
	v->a[43814] = anon_sym_GT_AMP;
	v->a[43815] = anon_sym_GT_PIPE;
	v->a[43816] = anon_sym_LT_GT;
	v->a[43817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43818] = anon_sym_DOLLAR;
	v->a[43819] = anon_sym_DQUOTE;
	small_parse_table_2191(v);
}

void	small_parse_table_2191(t_small_parse_table_array *v)
{
	v->a[43820] = sym_raw_string;
	v->a[43821] = sym_number;
	v->a[43822] = anon_sym_DOLLAR_LBRACE;
	v->a[43823] = anon_sym_DOLLAR_LPAREN;
	v->a[43824] = anon_sym_BQUOTE;
	v->a[43825] = sym_word;
	v->a[43826] = 7;
	v->a[43827] = actions(3);
	v->a[43828] = 1;
	v->a[43829] = sym_comment;
	v->a[43830] = actions(1435);
	v->a[43831] = 1;
	v->a[43832] = sym_file_descriptor;
	v->a[43833] = actions(1438);
	v->a[43834] = 1;
	v->a[43835] = sym_variable_name;
	v->a[43836] = actions(1537);
	v->a[43837] = 1;
	v->a[43838] = anon_sym_RPAREN;
	v->a[43839] = actions(1432);
	small_parse_table_2192(v);
}

void	small_parse_table_2192(t_small_parse_table_array *v)
{
	v->a[43840] = 7;
	v->a[43841] = anon_sym_LT;
	v->a[43842] = anon_sym_GT;
	v->a[43843] = anon_sym_GT_GT;
	v->a[43844] = anon_sym_LT_AMP;
	v->a[43845] = anon_sym_GT_AMP;
	v->a[43846] = anon_sym_GT_PIPE;
	v->a[43847] = anon_sym_LT_GT;
	v->a[43848] = actions(1428);
	v->a[43849] = 9;
	v->a[43850] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43851] = anon_sym_DOLLAR;
	v->a[43852] = anon_sym_DQUOTE;
	v->a[43853] = sym_raw_string;
	v->a[43854] = sym_number;
	v->a[43855] = anon_sym_DOLLAR_LBRACE;
	v->a[43856] = anon_sym_DOLLAR_LPAREN;
	v->a[43857] = anon_sym_BQUOTE;
	v->a[43858] = sym_word;
	v->a[43859] = actions(1430);
	small_parse_table_2193(v);
}

void	small_parse_table_2193(t_small_parse_table_array *v)
{
	v->a[43860] = 9;
	v->a[43861] = anon_sym_PIPE;
	v->a[43862] = anon_sym_SEMI_SEMI;
	v->a[43863] = anon_sym_AMP_AMP;
	v->a[43864] = anon_sym_PIPE_PIPE;
	v->a[43865] = anon_sym_LT_LT;
	v->a[43866] = anon_sym_LT_LT_DASH;
	v->a[43867] = aux_sym_heredoc_redirect_token1;
	v->a[43868] = anon_sym_AMP;
	v->a[43869] = anon_sym_SEMI;
	v->a[43870] = 7;
	v->a[43871] = actions(3);
	v->a[43872] = 1;
	v->a[43873] = sym_comment;
	v->a[43874] = actions(1435);
	v->a[43875] = 1;
	v->a[43876] = sym_file_descriptor;
	v->a[43877] = actions(1438);
	v->a[43878] = 1;
	v->a[43879] = sym_variable_name;
	small_parse_table_2194(v);
}

void	small_parse_table_2194(t_small_parse_table_array *v)
{
	v->a[43880] = actions(1540);
	v->a[43881] = 1;
	v->a[43882] = anon_sym_RPAREN;
	v->a[43883] = actions(1432);
	v->a[43884] = 7;
	v->a[43885] = anon_sym_LT;
	v->a[43886] = anon_sym_GT;
	v->a[43887] = anon_sym_GT_GT;
	v->a[43888] = anon_sym_LT_AMP;
	v->a[43889] = anon_sym_GT_AMP;
	v->a[43890] = anon_sym_GT_PIPE;
	v->a[43891] = anon_sym_LT_GT;
	v->a[43892] = actions(1428);
	v->a[43893] = 9;
	v->a[43894] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43895] = anon_sym_DOLLAR;
	v->a[43896] = anon_sym_DQUOTE;
	v->a[43897] = sym_raw_string;
	v->a[43898] = sym_number;
	v->a[43899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2195(v);
}

/* EOF small_parse_table_438.c */
