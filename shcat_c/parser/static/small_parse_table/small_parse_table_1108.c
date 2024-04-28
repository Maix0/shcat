/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1108.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5540(t_small_parse_table_array *v)
{
	v->a[110800] = anon_sym_AMP_AMP;
	v->a[110801] = anon_sym_PIPE;
	v->a[110802] = anon_sym_AMP;
	v->a[110803] = anon_sym_LT_LT;
	v->a[110804] = anon_sym_SEMI_SEMI;
	v->a[110805] = anon_sym_PIPE_AMP;
	v->a[110806] = anon_sym_LT_LT_DASH;
	v->a[110807] = actions(5823);
	v->a[110808] = 11;
	v->a[110809] = anon_sym_LT;
	v->a[110810] = anon_sym_GT;
	v->a[110811] = anon_sym_GT_GT;
	v->a[110812] = anon_sym_AMP_GT;
	v->a[110813] = anon_sym_AMP_GT_GT;
	v->a[110814] = anon_sym_LT_AMP;
	v->a[110815] = anon_sym_GT_AMP;
	v->a[110816] = anon_sym_GT_PIPE;
	v->a[110817] = anon_sym_LT_AMP_DASH;
	v->a[110818] = anon_sym_GT_AMP_DASH;
	v->a[110819] = anon_sym_LT_LT_LT;
	small_parse_table_5541(v);
}

void	small_parse_table_5541(t_small_parse_table_array *v)
{
	v->a[110820] = actions(5819);
	v->a[110821] = 17;
	v->a[110822] = anon_sym_LPAREN_LPAREN;
	v->a[110823] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110824] = anon_sym_DOLLAR_LBRACK;
	v->a[110825] = anon_sym_DOLLAR;
	v->a[110826] = sym__special_character;
	v->a[110827] = anon_sym_DQUOTE;
	v->a[110828] = sym_raw_string;
	v->a[110829] = sym_ansi_c_string;
	v->a[110830] = aux_sym_number_token1;
	v->a[110831] = aux_sym_number_token2;
	v->a[110832] = anon_sym_DOLLAR_LBRACE;
	v->a[110833] = anon_sym_DOLLAR_LPAREN;
	v->a[110834] = anon_sym_BQUOTE;
	v->a[110835] = anon_sym_DOLLAR_BQUOTE;
	v->a[110836] = anon_sym_LT_LPAREN;
	v->a[110837] = anon_sym_GT_LPAREN;
	v->a[110838] = sym_word;
	v->a[110839] = 3;
	small_parse_table_5542(v);
}

void	small_parse_table_5542(t_small_parse_table_array *v)
{
	v->a[110840] = actions(3);
	v->a[110841] = 1;
	v->a[110842] = sym_comment;
	v->a[110843] = actions(1263);
	v->a[110844] = 4;
	v->a[110845] = sym_file_descriptor;
	v->a[110846] = sym_test_operator;
	v->a[110847] = sym__brace_start;
	v->a[110848] = aux_sym_heredoc_redirect_token1;
	v->a[110849] = actions(1261);
	v->a[110850] = 39;
	v->a[110851] = anon_sym_LPAREN_LPAREN;
	v->a[110852] = anon_sym_SEMI;
	v->a[110853] = anon_sym_PIPE_PIPE;
	v->a[110854] = anon_sym_AMP_AMP;
	v->a[110855] = anon_sym_PIPE;
	v->a[110856] = anon_sym_AMP;
	v->a[110857] = anon_sym_LT;
	v->a[110858] = anon_sym_GT;
	v->a[110859] = anon_sym_LT_LT;
	small_parse_table_5543(v);
}

void	small_parse_table_5543(t_small_parse_table_array *v)
{
	v->a[110860] = anon_sym_GT_GT;
	v->a[110861] = anon_sym_esac;
	v->a[110862] = anon_sym_SEMI_SEMI;
	v->a[110863] = anon_sym_SEMI_AMP;
	v->a[110864] = anon_sym_SEMI_SEMI_AMP;
	v->a[110865] = anon_sym_PIPE_AMP;
	v->a[110866] = anon_sym_AMP_GT;
	v->a[110867] = anon_sym_AMP_GT_GT;
	v->a[110868] = anon_sym_LT_AMP;
	v->a[110869] = anon_sym_GT_AMP;
	v->a[110870] = anon_sym_GT_PIPE;
	v->a[110871] = anon_sym_LT_AMP_DASH;
	v->a[110872] = anon_sym_GT_AMP_DASH;
	v->a[110873] = anon_sym_LT_LT_DASH;
	v->a[110874] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110875] = anon_sym_DOLLAR_LBRACK;
	v->a[110876] = anon_sym_DOLLAR;
	v->a[110877] = sym__special_character;
	v->a[110878] = anon_sym_DQUOTE;
	v->a[110879] = sym_raw_string;
	small_parse_table_5544(v);
}

void	small_parse_table_5544(t_small_parse_table_array *v)
{
	v->a[110880] = sym_ansi_c_string;
	v->a[110881] = aux_sym_number_token1;
	v->a[110882] = aux_sym_number_token2;
	v->a[110883] = anon_sym_DOLLAR_LBRACE;
	v->a[110884] = anon_sym_DOLLAR_LPAREN;
	v->a[110885] = anon_sym_BQUOTE;
	v->a[110886] = anon_sym_DOLLAR_BQUOTE;
	v->a[110887] = anon_sym_LT_LPAREN;
	v->a[110888] = anon_sym_GT_LPAREN;
	v->a[110889] = sym_word;
	v->a[110890] = 5;
	v->a[110891] = actions(3);
	v->a[110892] = 1;
	v->a[110893] = sym_comment;
	v->a[110894] = actions(6282);
	v->a[110895] = 1;
	v->a[110896] = sym__special_character;
	v->a[110897] = state(2124);
	v->a[110898] = 1;
	v->a[110899] = aux_sym__literal_repeat1;
	small_parse_table_5545(v);
}

/* EOF small_parse_table_1108.c */
