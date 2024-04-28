/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_308.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1540(t_small_parse_table_array *v)
{
	v->a[30800] = actions(4532);
	v->a[30801] = 5;
	v->a[30802] = sym_file_descriptor;
	v->a[30803] = sym_test_operator;
	v->a[30804] = sym__bare_dollar;
	v->a[30805] = sym__brace_start;
	v->a[30806] = aux_sym_heredoc_redirect_token1;
	v->a[30807] = actions(4530);
	v->a[30808] = 42;
	v->a[30809] = anon_sym_LPAREN_LPAREN;
	v->a[30810] = anon_sym_SEMI;
	v->a[30811] = anon_sym_PIPE_PIPE;
	v->a[30812] = anon_sym_AMP_AMP;
	v->a[30813] = anon_sym_PIPE;
	v->a[30814] = anon_sym_AMP;
	v->a[30815] = anon_sym_EQ_EQ;
	v->a[30816] = anon_sym_LT;
	v->a[30817] = anon_sym_GT;
	v->a[30818] = anon_sym_LT_LT;
	v->a[30819] = anon_sym_GT_GT;
	small_parse_table_1541(v);
}

void	small_parse_table_1541(t_small_parse_table_array *v)
{
	v->a[30820] = anon_sym_esac;
	v->a[30821] = anon_sym_SEMI_SEMI;
	v->a[30822] = anon_sym_SEMI_AMP;
	v->a[30823] = anon_sym_SEMI_SEMI_AMP;
	v->a[30824] = anon_sym_PIPE_AMP;
	v->a[30825] = anon_sym_EQ_TILDE;
	v->a[30826] = anon_sym_AMP_GT;
	v->a[30827] = anon_sym_AMP_GT_GT;
	v->a[30828] = anon_sym_LT_AMP;
	v->a[30829] = anon_sym_GT_AMP;
	v->a[30830] = anon_sym_GT_PIPE;
	v->a[30831] = anon_sym_LT_AMP_DASH;
	v->a[30832] = anon_sym_GT_AMP_DASH;
	v->a[30833] = anon_sym_LT_LT_DASH;
	v->a[30834] = anon_sym_LT_LT_LT;
	v->a[30835] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30836] = anon_sym_DOLLAR_LBRACK;
	v->a[30837] = anon_sym_DOLLAR;
	v->a[30838] = sym__special_character;
	v->a[30839] = anon_sym_DQUOTE;
	small_parse_table_1542(v);
}

void	small_parse_table_1542(t_small_parse_table_array *v)
{
	v->a[30840] = sym_raw_string;
	v->a[30841] = sym_ansi_c_string;
	v->a[30842] = aux_sym_number_token1;
	v->a[30843] = aux_sym_number_token2;
	v->a[30844] = anon_sym_DOLLAR_LBRACE;
	v->a[30845] = anon_sym_DOLLAR_LPAREN;
	v->a[30846] = anon_sym_BQUOTE;
	v->a[30847] = anon_sym_DOLLAR_BQUOTE;
	v->a[30848] = anon_sym_LT_LPAREN;
	v->a[30849] = anon_sym_GT_LPAREN;
	v->a[30850] = sym_word;
	v->a[30851] = 22;
	v->a[30852] = actions(3);
	v->a[30853] = 1;
	v->a[30854] = sym_comment;
	v->a[30855] = actions(3536);
	v->a[30856] = 1;
	v->a[30857] = anon_sym_DOLLAR_LBRACK;
	v->a[30858] = actions(3539);
	v->a[30859] = 1;
	small_parse_table_1543(v);
}

void	small_parse_table_1543(t_small_parse_table_array *v)
{
	v->a[30860] = anon_sym_DOLLAR;
	v->a[30861] = actions(3545);
	v->a[30862] = 1;
	v->a[30863] = anon_sym_DQUOTE;
	v->a[30864] = actions(3548);
	v->a[30865] = 1;
	v->a[30866] = aux_sym_number_token1;
	v->a[30867] = actions(3551);
	v->a[30868] = 1;
	v->a[30869] = aux_sym_number_token2;
	v->a[30870] = actions(3554);
	v->a[30871] = 1;
	v->a[30872] = anon_sym_DOLLAR_LBRACE;
	v->a[30873] = actions(3557);
	v->a[30874] = 1;
	v->a[30875] = anon_sym_DOLLAR_LPAREN;
	v->a[30876] = actions(3560);
	v->a[30877] = 1;
	v->a[30878] = anon_sym_BQUOTE;
	v->a[30879] = actions(3563);
	small_parse_table_1544(v);
}

void	small_parse_table_1544(t_small_parse_table_array *v)
{
	v->a[30880] = 1;
	v->a[30881] = anon_sym_DOLLAR_BQUOTE;
	v->a[30882] = actions(3575);
	v->a[30883] = 1;
	v->a[30884] = sym__brace_start;
	v->a[30885] = actions(4537);
	v->a[30886] = 1;
	v->a[30887] = sym__special_character;
	v->a[30888] = actions(4540);
	v->a[30889] = 1;
	v->a[30890] = aux_sym__simple_variable_name_token1;
	v->a[30891] = actions(4543);
	v->a[30892] = 1;
	v->a[30893] = sym_test_operator;
	v->a[30894] = state(1966);
	v->a[30895] = 1;
	v->a[30896] = aux_sym__literal_repeat1;
	v->a[30897] = actions(2442);
	v->a[30898] = 2;
	v->a[30899] = sym_file_descriptor;
	small_parse_table_1545(v);
}

/* EOF small_parse_table_308.c */
