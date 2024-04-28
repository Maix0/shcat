/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2478.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12390(t_small_parse_table_array *v)
{
	v->a[247800] = sym_file_descriptor;
	v->a[247801] = actions(11335);
	v->a[247802] = 2;
	v->a[247803] = anon_sym_LT_AMP_DASH;
	v->a[247804] = anon_sym_GT_AMP_DASH;
	v->a[247805] = state(5043);
	v->a[247806] = 2;
	v->a[247807] = sym_file_redirect;
	v->a[247808] = sym_herestring_redirect;
	v->a[247809] = actions(11333);
	v->a[247810] = 8;
	v->a[247811] = anon_sym_LT;
	v->a[247812] = anon_sym_GT;
	v->a[247813] = anon_sym_GT_GT;
	v->a[247814] = anon_sym_AMP_GT;
	v->a[247815] = anon_sym_AMP_GT_GT;
	v->a[247816] = anon_sym_LT_AMP;
	v->a[247817] = anon_sym_GT_AMP;
	v->a[247818] = anon_sym_GT_PIPE;
	v->a[247819] = actions(11533);
	small_parse_table_12391(v);
}

void	small_parse_table_12391(t_small_parse_table_array *v)
{
	v->a[247820] = 11;
	v->a[247821] = anon_sym_SEMI;
	v->a[247822] = anon_sym_PIPE_PIPE;
	v->a[247823] = anon_sym_AMP_AMP;
	v->a[247824] = anon_sym_PIPE;
	v->a[247825] = anon_sym_AMP;
	v->a[247826] = anon_sym_LT_LT;
	v->a[247827] = anon_sym_SEMI_SEMI;
	v->a[247828] = anon_sym_SEMI_AMP;
	v->a[247829] = anon_sym_SEMI_SEMI_AMP;
	v->a[247830] = anon_sym_PIPE_AMP;
	v->a[247831] = anon_sym_LT_LT_DASH;
	v->a[247832] = 5;
	v->a[247833] = actions(3);
	v->a[247834] = 1;
	v->a[247835] = sym_comment;
	v->a[247836] = actions(11566);
	v->a[247837] = 1;
	v->a[247838] = sym__special_character;
	v->a[247839] = state(4485);
	small_parse_table_12392(v);
}

void	small_parse_table_12392(t_small_parse_table_array *v)
{
	v->a[247840] = 1;
	v->a[247841] = aux_sym__literal_repeat1;
	v->a[247842] = actions(4566);
	v->a[247843] = 3;
	v->a[247844] = sym_file_descriptor;
	v->a[247845] = ts_builtin_sym_end;
	v->a[247846] = aux_sym_heredoc_redirect_token1;
	v->a[247847] = actions(4564);
	v->a[247848] = 21;
	v->a[247849] = anon_sym_SEMI;
	v->a[247850] = anon_sym_PIPE_PIPE;
	v->a[247851] = anon_sym_AMP_AMP;
	v->a[247852] = anon_sym_PIPE;
	v->a[247853] = anon_sym_AMP;
	v->a[247854] = anon_sym_LT;
	v->a[247855] = anon_sym_GT;
	v->a[247856] = anon_sym_LT_LT;
	v->a[247857] = anon_sym_GT_GT;
	v->a[247858] = anon_sym_RPAREN;
	v->a[247859] = anon_sym_SEMI_SEMI;
	small_parse_table_12393(v);
}

void	small_parse_table_12393(t_small_parse_table_array *v)
{
	v->a[247860] = anon_sym_PIPE_AMP;
	v->a[247861] = anon_sym_AMP_GT;
	v->a[247862] = anon_sym_AMP_GT_GT;
	v->a[247863] = anon_sym_LT_AMP;
	v->a[247864] = anon_sym_GT_AMP;
	v->a[247865] = anon_sym_GT_PIPE;
	v->a[247866] = anon_sym_LT_AMP_DASH;
	v->a[247867] = anon_sym_GT_AMP_DASH;
	v->a[247868] = anon_sym_LT_LT_DASH;
	v->a[247869] = anon_sym_BQUOTE;
	v->a[247870] = 6;
	v->a[247871] = actions(3);
	v->a[247872] = 1;
	v->a[247873] = sym_comment;
	v->a[247874] = actions(11568);
	v->a[247875] = 1;
	v->a[247876] = aux_sym_concatenation_token1;
	v->a[247877] = actions(11570);
	v->a[247878] = 1;
	v->a[247879] = sym__concat;
	small_parse_table_12394(v);
}

void	small_parse_table_12394(t_small_parse_table_array *v)
{
	v->a[247880] = state(4520);
	v->a[247881] = 1;
	v->a[247882] = aux_sym_concatenation_repeat1;
	v->a[247883] = actions(1267);
	v->a[247884] = 3;
	v->a[247885] = sym_test_operator;
	v->a[247886] = sym__brace_start;
	v->a[247887] = aux_sym_heredoc_redirect_token1;
	v->a[247888] = actions(1265);
	v->a[247889] = 20;
	v->a[247890] = anon_sym_LPAREN_LPAREN;
	v->a[247891] = anon_sym_SEMI;
	v->a[247892] = anon_sym_AMP;
	v->a[247893] = anon_sym_SEMI_SEMI;
	v->a[247894] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[247895] = anon_sym_DOLLAR_LBRACK;
	v->a[247896] = anon_sym_DOLLAR;
	v->a[247897] = sym__special_character;
	v->a[247898] = anon_sym_DQUOTE;
	v->a[247899] = sym_raw_string;
	small_parse_table_12395(v);
}

/* EOF small_parse_table_2478.c */
