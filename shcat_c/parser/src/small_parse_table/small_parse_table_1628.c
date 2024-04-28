/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1628.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8140(t_small_parse_table_array *v)
{
	v->a[162800] = sym_comment;
	v->a[162801] = actions(7452);
	v->a[162802] = 1;
	v->a[162803] = sym__special_character;
	v->a[162804] = state(3065);
	v->a[162805] = 1;
	v->a[162806] = aux_sym__literal_repeat1;
	v->a[162807] = actions(1362);
	v->a[162808] = 12;
	v->a[162809] = anon_sym_PIPE;
	v->a[162810] = anon_sym_LT;
	v->a[162811] = anon_sym_GT;
	v->a[162812] = anon_sym_LT_LT;
	v->a[162813] = anon_sym_AMP_GT;
	v->a[162814] = anon_sym_LT_AMP;
	v->a[162815] = anon_sym_GT_AMP;
	v->a[162816] = anon_sym_DOLLAR;
	v->a[162817] = aux_sym_number_token1;
	v->a[162818] = aux_sym_number_token2;
	v->a[162819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_8141(v);
}

void	small_parse_table_8141(t_small_parse_table_array *v)
{
	v->a[162820] = sym_word;
	v->a[162821] = actions(1364);
	v->a[162822] = 23;
	v->a[162823] = sym_file_descriptor;
	v->a[162824] = sym_test_operator;
	v->a[162825] = sym__brace_start;
	v->a[162826] = anon_sym_LPAREN_LPAREN;
	v->a[162827] = anon_sym_PIPE_PIPE;
	v->a[162828] = anon_sym_AMP_AMP;
	v->a[162829] = anon_sym_GT_GT;
	v->a[162830] = anon_sym_PIPE_AMP;
	v->a[162831] = anon_sym_AMP_GT_GT;
	v->a[162832] = anon_sym_GT_PIPE;
	v->a[162833] = anon_sym_LT_AMP_DASH;
	v->a[162834] = anon_sym_GT_AMP_DASH;
	v->a[162835] = anon_sym_LT_LT_DASH;
	v->a[162836] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[162837] = anon_sym_DOLLAR_LBRACK;
	v->a[162838] = anon_sym_DQUOTE;
	v->a[162839] = sym_raw_string;
	small_parse_table_8142(v);
}

void	small_parse_table_8142(t_small_parse_table_array *v)
{
	v->a[162840] = sym_ansi_c_string;
	v->a[162841] = anon_sym_DOLLAR_LBRACE;
	v->a[162842] = anon_sym_BQUOTE;
	v->a[162843] = anon_sym_DOLLAR_BQUOTE;
	v->a[162844] = anon_sym_LT_LPAREN;
	v->a[162845] = anon_sym_GT_LPAREN;
	v->a[162846] = 25;
	v->a[162847] = actions(71);
	v->a[162848] = 1;
	v->a[162849] = sym_comment;
	v->a[162850] = actions(6474);
	v->a[162851] = 1;
	v->a[162852] = sym_word;
	v->a[162853] = actions(6480);
	v->a[162854] = 1;
	v->a[162855] = anon_sym_LPAREN;
	v->a[162856] = actions(6488);
	v->a[162857] = 1;
	v->a[162858] = anon_sym_DOLLAR;
	v->a[162859] = actions(6494);
	small_parse_table_8143(v);
}

void	small_parse_table_8143(t_small_parse_table_array *v)
{
	v->a[162860] = 1;
	v->a[162861] = aux_sym_number_token1;
	v->a[162862] = actions(6496);
	v->a[162863] = 1;
	v->a[162864] = aux_sym_number_token2;
	v->a[162865] = actions(6500);
	v->a[162866] = 1;
	v->a[162867] = anon_sym_DOLLAR_LPAREN;
	v->a[162868] = actions(6508);
	v->a[162869] = 1;
	v->a[162870] = sym_test_operator;
	v->a[162871] = actions(6510);
	v->a[162872] = 1;
	v->a[162873] = sym_extglob_pattern;
	v->a[162874] = actions(6512);
	v->a[162875] = 1;
	v->a[162876] = sym__brace_start;
	v->a[162877] = actions(7226);
	v->a[162878] = 1;
	v->a[162879] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_8144(v);
}

void	small_parse_table_8144(t_small_parse_table_array *v)
{
	v->a[162880] = actions(7228);
	v->a[162881] = 1;
	v->a[162882] = sym__special_character;
	v->a[162883] = actions(7230);
	v->a[162884] = 1;
	v->a[162885] = anon_sym_DQUOTE;
	v->a[162886] = actions(7234);
	v->a[162887] = 1;
	v->a[162888] = anon_sym_DOLLAR_LBRACE;
	v->a[162889] = actions(7236);
	v->a[162890] = 1;
	v->a[162891] = anon_sym_BQUOTE;
	v->a[162892] = actions(7238);
	v->a[162893] = 1;
	v->a[162894] = anon_sym_DOLLAR_BQUOTE;
	v->a[162895] = actions(7455);
	v->a[162896] = 1;
	v->a[162897] = anon_sym_esac;
	v->a[162898] = state(6426);
	v->a[162899] = 1;
	small_parse_table_8145(v);
}

/* EOF small_parse_table_1628.c */
