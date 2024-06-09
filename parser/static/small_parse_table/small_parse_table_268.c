/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_268.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1340(t_small_parse_table_array *v)
{
	v->a[26800] = 6;
	v->a[26801] = actions(3);
	v->a[26802] = 1;
	v->a[26803] = sym_comment;
	v->a[26804] = actions(413);
	v->a[26805] = 1;
	v->a[26806] = sym_file_descriptor;
	v->a[26807] = actions(549);
	v->a[26808] = 1;
	v->a[26809] = sym_variable_name;
	v->a[26810] = actions(547);
	v->a[26811] = 2;
	v->a[26812] = aux_sym__simple_variable_name_token1;
	v->a[26813] = aux_sym__multiline_variable_name_token1;
	v->a[26814] = actions(545);
	v->a[26815] = 9;
	v->a[26816] = anon_sym_BANG;
	v->a[26817] = anon_sym_DASH;
	v->a[26818] = anon_sym_STAR;
	v->a[26819] = anon_sym_QMARK;
	small_parse_table_1341(v);
}

void	small_parse_table_1341(t_small_parse_table_array *v)
{
	v->a[26820] = anon_sym_DOLLAR;
	v->a[26821] = anon_sym_POUND;
	v->a[26822] = anon_sym_AT;
	v->a[26823] = anon_sym_0;
	v->a[26824] = anon_sym__;
	v->a[26825] = actions(407);
	v->a[26826] = 25;
	v->a[26827] = anon_sym_PIPE;
	v->a[26828] = anon_sym_AMP_AMP;
	v->a[26829] = anon_sym_PIPE_PIPE;
	v->a[26830] = anon_sym_LT;
	v->a[26831] = anon_sym_GT;
	v->a[26832] = anon_sym_GT_GT;
	v->a[26833] = anon_sym_AMP_GT;
	v->a[26834] = anon_sym_AMP_GT_GT;
	v->a[26835] = anon_sym_LT_AMP;
	v->a[26836] = anon_sym_GT_AMP;
	v->a[26837] = anon_sym_GT_PIPE;
	v->a[26838] = anon_sym_LT_AMP_DASH;
	v->a[26839] = anon_sym_GT_AMP_DASH;
	small_parse_table_1342(v);
}

void	small_parse_table_1342(t_small_parse_table_array *v)
{
	v->a[26840] = anon_sym_LT_LT;
	v->a[26841] = anon_sym_LT_LT_DASH;
	v->a[26842] = aux_sym_heredoc_redirect_token1;
	v->a[26843] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26844] = anon_sym_DQUOTE;
	v->a[26845] = sym_raw_string;
	v->a[26846] = aux_sym_number_token1;
	v->a[26847] = aux_sym_number_token2;
	v->a[26848] = anon_sym_DOLLAR_LBRACE;
	v->a[26849] = anon_sym_DOLLAR_LPAREN;
	v->a[26850] = anon_sym_BQUOTE;
	v->a[26851] = sym_word;
	v->a[26852] = 18;
	v->a[26853] = actions(3);
	v->a[26854] = 1;
	v->a[26855] = sym_comment;
	v->a[26856] = actions(17);
	v->a[26857] = 1;
	v->a[26858] = anon_sym_LPAREN;
	v->a[26859] = actions(485);
	small_parse_table_1343(v);
}

void	small_parse_table_1343(t_small_parse_table_array *v)
{
	v->a[26860] = 1;
	v->a[26861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26862] = actions(487);
	v->a[26863] = 1;
	v->a[26864] = anon_sym_DOLLAR;
	v->a[26865] = actions(489);
	v->a[26866] = 1;
	v->a[26867] = anon_sym_DQUOTE;
	v->a[26868] = actions(491);
	v->a[26869] = 1;
	v->a[26870] = aux_sym_number_token1;
	v->a[26871] = actions(493);
	v->a[26872] = 1;
	v->a[26873] = aux_sym_number_token2;
	v->a[26874] = actions(495);
	v->a[26875] = 1;
	v->a[26876] = anon_sym_DOLLAR_LBRACE;
	v->a[26877] = actions(497);
	v->a[26878] = 1;
	v->a[26879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1344(v);
}

void	small_parse_table_1344(t_small_parse_table_array *v)
{
	v->a[26880] = actions(499);
	v->a[26881] = 1;
	v->a[26882] = anon_sym_BQUOTE;
	v->a[26883] = actions(501);
	v->a[26884] = 1;
	v->a[26885] = sym__bare_dollar;
	v->a[26886] = actions(517);
	v->a[26887] = 1;
	v->a[26888] = sym_file_descriptor;
	v->a[26889] = state(313);
	v->a[26890] = 1;
	v->a[26891] = aux_sym_command_repeat2;
	v->a[26892] = state(753);
	v->a[26893] = 1;
	v->a[26894] = sym_concatenation;
	v->a[26895] = state(1188);
	v->a[26896] = 1;
	v->a[26897] = sym_subshell;
	v->a[26898] = actions(966);
	v->a[26899] = 2;
	small_parse_table_1345(v);
}

/* EOF small_parse_table_268.c */
