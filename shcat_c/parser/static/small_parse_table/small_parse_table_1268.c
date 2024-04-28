/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1268.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6340(t_small_parse_table_array *v)
{
	v->a[126800] = 2;
	v->a[126801] = sym__concat;
	v->a[126802] = aux_sym_concatenation_token1;
	v->a[126803] = actions(4552);
	v->a[126804] = 13;
	v->a[126805] = anon_sym_PIPE;
	v->a[126806] = anon_sym_LT;
	v->a[126807] = anon_sym_GT;
	v->a[126808] = anon_sym_LT_LT;
	v->a[126809] = anon_sym_AMP_GT;
	v->a[126810] = anon_sym_LT_AMP;
	v->a[126811] = anon_sym_GT_AMP;
	v->a[126812] = anon_sym_DOLLAR;
	v->a[126813] = aux_sym_number_token1;
	v->a[126814] = aux_sym_number_token2;
	v->a[126815] = anon_sym_DOLLAR_LPAREN;
	v->a[126816] = anon_sym_BQUOTE;
	v->a[126817] = sym_word;
	v->a[126818] = actions(4554);
	v->a[126819] = 25;
	small_parse_table_6341(v);
}

void	small_parse_table_6341(t_small_parse_table_array *v)
{
	v->a[126820] = sym_file_descriptor;
	v->a[126821] = sym_variable_name;
	v->a[126822] = sym_test_operator;
	v->a[126823] = sym__brace_start;
	v->a[126824] = anon_sym_LPAREN_LPAREN;
	v->a[126825] = anon_sym_PIPE_PIPE;
	v->a[126826] = anon_sym_AMP_AMP;
	v->a[126827] = anon_sym_GT_GT;
	v->a[126828] = anon_sym_PIPE_AMP;
	v->a[126829] = anon_sym_AMP_GT_GT;
	v->a[126830] = anon_sym_GT_PIPE;
	v->a[126831] = anon_sym_LT_AMP_DASH;
	v->a[126832] = anon_sym_GT_AMP_DASH;
	v->a[126833] = anon_sym_LT_LT_DASH;
	v->a[126834] = anon_sym_LT_LT_LT;
	v->a[126835] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126836] = anon_sym_DOLLAR_LBRACK;
	v->a[126837] = sym__special_character;
	v->a[126838] = anon_sym_DQUOTE;
	v->a[126839] = sym_raw_string;
	small_parse_table_6342(v);
}

void	small_parse_table_6342(t_small_parse_table_array *v)
{
	v->a[126840] = sym_ansi_c_string;
	v->a[126841] = anon_sym_DOLLAR_LBRACE;
	v->a[126842] = anon_sym_DOLLAR_BQUOTE;
	v->a[126843] = anon_sym_LT_LPAREN;
	v->a[126844] = anon_sym_GT_LPAREN;
	v->a[126845] = 26;
	v->a[126846] = actions(3);
	v->a[126847] = 1;
	v->a[126848] = sym_comment;
	v->a[126849] = actions(6480);
	v->a[126850] = 1;
	v->a[126851] = anon_sym_LPAREN;
	v->a[126852] = actions(6486);
	v->a[126853] = 1;
	v->a[126854] = anon_sym_DOLLAR_LBRACK;
	v->a[126855] = actions(6488);
	v->a[126856] = 1;
	v->a[126857] = anon_sym_DOLLAR;
	v->a[126858] = actions(6490);
	v->a[126859] = 1;
	small_parse_table_6343(v);
}

void	small_parse_table_6343(t_small_parse_table_array *v)
{
	v->a[126860] = sym__special_character;
	v->a[126861] = actions(6492);
	v->a[126862] = 1;
	v->a[126863] = anon_sym_DQUOTE;
	v->a[126864] = actions(6494);
	v->a[126865] = 1;
	v->a[126866] = aux_sym_number_token1;
	v->a[126867] = actions(6496);
	v->a[126868] = 1;
	v->a[126869] = aux_sym_number_token2;
	v->a[126870] = actions(6498);
	v->a[126871] = 1;
	v->a[126872] = anon_sym_DOLLAR_LBRACE;
	v->a[126873] = actions(6500);
	v->a[126874] = 1;
	v->a[126875] = anon_sym_DOLLAR_LPAREN;
	v->a[126876] = actions(6502);
	v->a[126877] = 1;
	v->a[126878] = anon_sym_BQUOTE;
	v->a[126879] = actions(6504);
	small_parse_table_6344(v);
}

void	small_parse_table_6344(t_small_parse_table_array *v)
{
	v->a[126880] = 1;
	v->a[126881] = anon_sym_DOLLAR_BQUOTE;
	v->a[126882] = actions(6508);
	v->a[126883] = 1;
	v->a[126884] = sym_test_operator;
	v->a[126885] = actions(6510);
	v->a[126886] = 1;
	v->a[126887] = sym_extglob_pattern;
	v->a[126888] = actions(6512);
	v->a[126889] = 1;
	v->a[126890] = sym__brace_start;
	v->a[126891] = actions(6622);
	v->a[126892] = 1;
	v->a[126893] = anon_sym_esac;
	v->a[126894] = actions(6624);
	v->a[126895] = 1;
	v->a[126896] = aux_sym_heredoc_redirect_token1;
	v->a[126897] = state(6426);
	v->a[126898] = 1;
	v->a[126899] = aux_sym__literal_repeat1;
	small_parse_table_6345(v);
}

/* EOF small_parse_table_1268.c */
