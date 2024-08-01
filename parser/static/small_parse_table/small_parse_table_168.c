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
	v->a[16800] = sym_command_substitution;
	v->a[16801] = actions(421);
	v->a[16802] = 19;
	v->a[16803] = anon_sym_PIPE;
	v->a[16804] = anon_sym_SEMI_SEMI;
	v->a[16805] = anon_sym_AMP_AMP;
	v->a[16806] = anon_sym_PIPE_PIPE;
	v->a[16807] = anon_sym_LT;
	v->a[16808] = anon_sym_GT;
	v->a[16809] = anon_sym_GT_GT;
	v->a[16810] = anon_sym_LT_LT;
	v->a[16811] = aux_sym_heredoc_redirect_token1;
	v->a[16812] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16813] = anon_sym_DOLLAR;
	v->a[16814] = anon_sym_DQUOTE;
	v->a[16815] = sym_raw_string;
	v->a[16816] = sym_number;
	v->a[16817] = anon_sym_DOLLAR_LBRACE;
	v->a[16818] = anon_sym_DOLLAR_LPAREN;
	v->a[16819] = anon_sym_BQUOTE;
	small_parse_table_841(v);
}

void	small_parse_table_841(t_small_parse_table_array *v)
{
	v->a[16820] = sym_word;
	v->a[16821] = anon_sym_SEMI;
	v->a[16822] = 13;
	v->a[16823] = actions(3);
	v->a[16824] = 1;
	v->a[16825] = sym_comment;
	v->a[16826] = actions(99);
	v->a[16827] = 1;
	v->a[16828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16829] = actions(101);
	v->a[16830] = 1;
	v->a[16831] = anon_sym_DOLLAR;
	v->a[16832] = actions(103);
	v->a[16833] = 1;
	v->a[16834] = anon_sym_DQUOTE;
	v->a[16835] = actions(107);
	v->a[16836] = 1;
	v->a[16837] = anon_sym_DOLLAR_LBRACE;
	v->a[16838] = actions(109);
	v->a[16839] = 1;
	small_parse_table_842(v);
}

void	small_parse_table_842(t_small_parse_table_array *v)
{
	v->a[16840] = anon_sym_DOLLAR_LPAREN;
	v->a[16841] = actions(111);
	v->a[16842] = 1;
	v->a[16843] = anon_sym_BQUOTE;
	v->a[16844] = actions(405);
	v->a[16845] = 1;
	v->a[16846] = sym__bare_dollar;
	v->a[16847] = state(171);
	v->a[16848] = 1;
	v->a[16849] = aux_sym_command_repeat2;
	v->a[16850] = state(523);
	v->a[16851] = 1;
	v->a[16852] = sym_concatenation;
	v->a[16853] = actions(401);
	v->a[16854] = 3;
	v->a[16855] = sym_raw_string;
	v->a[16856] = sym_number;
	v->a[16857] = sym_word;
	v->a[16858] = state(261);
	v->a[16859] = 5;
	small_parse_table_843(v);
}

void	small_parse_table_843(t_small_parse_table_array *v)
{
	v->a[16860] = sym_arithmetic_expansion;
	v->a[16861] = sym_string;
	v->a[16862] = sym_simple_expansion;
	v->a[16863] = sym_expansion;
	v->a[16864] = sym_command_substitution;
	v->a[16865] = actions(417);
	v->a[16866] = 11;
	v->a[16867] = anon_sym_esac;
	v->a[16868] = anon_sym_PIPE;
	v->a[16869] = anon_sym_SEMI_SEMI;
	v->a[16870] = anon_sym_AMP_AMP;
	v->a[16871] = anon_sym_PIPE_PIPE;
	v->a[16872] = anon_sym_LT;
	v->a[16873] = anon_sym_GT;
	v->a[16874] = anon_sym_GT_GT;
	v->a[16875] = anon_sym_LT_LT;
	v->a[16876] = aux_sym_heredoc_redirect_token1;
	v->a[16877] = anon_sym_SEMI;
	v->a[16878] = 13;
	v->a[16879] = actions(3);
	small_parse_table_844(v);
}

void	small_parse_table_844(t_small_parse_table_array *v)
{
	v->a[16880] = 1;
	v->a[16881] = sym_comment;
	v->a[16882] = actions(99);
	v->a[16883] = 1;
	v->a[16884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16885] = actions(101);
	v->a[16886] = 1;
	v->a[16887] = anon_sym_DOLLAR;
	v->a[16888] = actions(103);
	v->a[16889] = 1;
	v->a[16890] = anon_sym_DQUOTE;
	v->a[16891] = actions(107);
	v->a[16892] = 1;
	v->a[16893] = anon_sym_DOLLAR_LBRACE;
	v->a[16894] = actions(109);
	v->a[16895] = 1;
	v->a[16896] = anon_sym_DOLLAR_LPAREN;
	v->a[16897] = actions(111);
	v->a[16898] = 1;
	v->a[16899] = anon_sym_BQUOTE;
	small_parse_table_845(v);
}

/* EOF small_parse_table_168.c */
