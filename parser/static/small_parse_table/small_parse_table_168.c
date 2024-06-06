/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_168.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_840(t_small_parse_table_array *v)
{
	v->a[16800] = 9;
	v->a[16801] = anon_sym_BANG;
	v->a[16802] = anon_sym_DASH;
	v->a[16803] = anon_sym_STAR;
	v->a[16804] = anon_sym_QMARK;
	v->a[16805] = anon_sym_DOLLAR;
	v->a[16806] = anon_sym_POUND;
	v->a[16807] = anon_sym_AT;
	v->a[16808] = anon_sym_0;
	v->a[16809] = anon_sym__;
	v->a[16810] = actions(826);
	v->a[16811] = 27;
	v->a[16812] = anon_sym_PIPE;
	v->a[16813] = anon_sym_PIPE_AMP;
	v->a[16814] = anon_sym_AMP_AMP;
	v->a[16815] = anon_sym_PIPE_PIPE;
	v->a[16816] = anon_sym_LT;
	v->a[16817] = anon_sym_GT;
	v->a[16818] = anon_sym_GT_GT;
	v->a[16819] = anon_sym_AMP_GT;
	small_parse_table_841(v);
}

void	small_parse_table_841(t_small_parse_table_array *v)
{
	v->a[16820] = anon_sym_AMP_GT_GT;
	v->a[16821] = anon_sym_LT_AMP;
	v->a[16822] = anon_sym_GT_AMP;
	v->a[16823] = anon_sym_GT_PIPE;
	v->a[16824] = anon_sym_LT_AMP_DASH;
	v->a[16825] = anon_sym_GT_AMP_DASH;
	v->a[16826] = anon_sym_LT_LT;
	v->a[16827] = anon_sym_LT_LT_DASH;
	v->a[16828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16829] = sym__special_character;
	v->a[16830] = anon_sym_DQUOTE;
	v->a[16831] = sym_raw_string;
	v->a[16832] = aux_sym_number_token1;
	v->a[16833] = aux_sym_number_token2;
	v->a[16834] = anon_sym_DOLLAR_LBRACE;
	v->a[16835] = anon_sym_DOLLAR_LPAREN;
	v->a[16836] = anon_sym_BQUOTE;
	v->a[16837] = anon_sym_DOLLAR_BQUOTE;
	v->a[16838] = sym_word;
	v->a[16839] = 21;
	small_parse_table_842(v);
}

void	small_parse_table_842(t_small_parse_table_array *v)
{
	v->a[16840] = actions(3);
	v->a[16841] = 1;
	v->a[16842] = sym_comment;
	v->a[16843] = actions(1252);
	v->a[16844] = 1;
	v->a[16845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16846] = actions(1254);
	v->a[16847] = 1;
	v->a[16848] = anon_sym_DOLLAR;
	v->a[16849] = actions(1258);
	v->a[16850] = 1;
	v->a[16851] = anon_sym_DQUOTE;
	v->a[16852] = actions(1260);
	v->a[16853] = 1;
	v->a[16854] = aux_sym_number_token1;
	v->a[16855] = actions(1262);
	v->a[16856] = 1;
	v->a[16857] = aux_sym_number_token2;
	v->a[16858] = actions(1264);
	v->a[16859] = 1;
	small_parse_table_843(v);
}

void	small_parse_table_843(t_small_parse_table_array *v)
{
	v->a[16860] = anon_sym_DOLLAR_LBRACE;
	v->a[16861] = actions(1266);
	v->a[16862] = 1;
	v->a[16863] = anon_sym_DOLLAR_LPAREN;
	v->a[16864] = actions(1268);
	v->a[16865] = 1;
	v->a[16866] = anon_sym_BQUOTE;
	v->a[16867] = actions(1270);
	v->a[16868] = 1;
	v->a[16869] = anon_sym_DOLLAR_BQUOTE;
	v->a[16870] = actions(1274);
	v->a[16871] = 1;
	v->a[16872] = sym__bare_dollar;
	v->a[16873] = actions(1276);
	v->a[16874] = 1;
	v->a[16875] = sym__brace_start;
	v->a[16876] = actions(2380);
	v->a[16877] = 1;
	v->a[16878] = sym__special_character;
	v->a[16879] = actions(2382);
	small_parse_table_844(v);
}

void	small_parse_table_844(t_small_parse_table_array *v)
{
	v->a[16880] = 1;
	v->a[16881] = sym_test_operator;
	v->a[16882] = state(490);
	v->a[16883] = 1;
	v->a[16884] = aux_sym_command_repeat2;
	v->a[16885] = state(1232);
	v->a[16886] = 1;
	v->a[16887] = aux_sym__literal_repeat1;
	v->a[16888] = state(1293);
	v->a[16889] = 1;
	v->a[16890] = sym_concatenation;
	v->a[16891] = actions(1339);
	v->a[16892] = 2;
	v->a[16893] = sym_file_descriptor;
	v->a[16894] = aux_sym_heredoc_redirect_token1;
	v->a[16895] = actions(2378);
	v->a[16896] = 2;
	v->a[16897] = sym_raw_string;
	v->a[16898] = sym_word;
	v->a[16899] = state(1356);
	small_parse_table_845(v);
}

/* EOF small_parse_table_168.c */
