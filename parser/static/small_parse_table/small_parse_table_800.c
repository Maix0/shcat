/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_800.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4000(t_small_parse_table_array *v)
{
	v->a[80000] = 1;
	v->a[80001] = sym_comment;
	v->a[80002] = actions(2653);
	v->a[80003] = 2;
	v->a[80004] = sym_file_descriptor;
	v->a[80005] = aux_sym_heredoc_redirect_token1;
	v->a[80006] = actions(2655);
	v->a[80007] = 19;
	v->a[80008] = anon_sym_esac;
	v->a[80009] = anon_sym_PIPE;
	v->a[80010] = anon_sym_SEMI_SEMI;
	v->a[80011] = anon_sym_AMP_AMP;
	v->a[80012] = anon_sym_PIPE_PIPE;
	v->a[80013] = anon_sym_LT;
	v->a[80014] = anon_sym_GT;
	v->a[80015] = anon_sym_GT_GT;
	v->a[80016] = anon_sym_AMP_GT;
	v->a[80017] = anon_sym_AMP_GT_GT;
	v->a[80018] = anon_sym_LT_AMP;
	v->a[80019] = anon_sym_GT_AMP;
	small_parse_table_4001(v);
}

void	small_parse_table_4001(t_small_parse_table_array *v)
{
	v->a[80020] = anon_sym_GT_PIPE;
	v->a[80021] = anon_sym_LT_AMP_DASH;
	v->a[80022] = anon_sym_GT_AMP_DASH;
	v->a[80023] = anon_sym_LT_LT;
	v->a[80024] = anon_sym_LT_LT_DASH;
	v->a[80025] = anon_sym_AMP;
	v->a[80026] = anon_sym_SEMI;
	v->a[80027] = 15;
	v->a[80028] = actions(3);
	v->a[80029] = 1;
	v->a[80030] = sym_comment;
	v->a[80031] = actions(1959);
	v->a[80032] = 1;
	v->a[80033] = anon_sym_LPAREN;
	v->a[80034] = actions(1963);
	v->a[80035] = 1;
	v->a[80036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80037] = actions(1965);
	v->a[80038] = 1;
	v->a[80039] = anon_sym_DOLLAR;
	small_parse_table_4002(v);
}

void	small_parse_table_4002(t_small_parse_table_array *v)
{
	v->a[80040] = actions(1967);
	v->a[80041] = 1;
	v->a[80042] = anon_sym_DQUOTE;
	v->a[80043] = actions(1969);
	v->a[80044] = 1;
	v->a[80045] = anon_sym_DOLLAR_LBRACE;
	v->a[80046] = actions(1971);
	v->a[80047] = 1;
	v->a[80048] = anon_sym_DOLLAR_LPAREN;
	v->a[80049] = actions(1973);
	v->a[80050] = 1;
	v->a[80051] = anon_sym_BQUOTE;
	v->a[80052] = actions(1975);
	v->a[80053] = 1;
	v->a[80054] = sym_extglob_pattern;
	v->a[80055] = state(1547);
	v->a[80056] = 1;
	v->a[80057] = aux_sym_case_statement_repeat1;
	v->a[80058] = state(2080);
	v->a[80059] = 1;
	small_parse_table_4003(v);
}

void	small_parse_table_4003(t_small_parse_table_array *v)
{
	v->a[80060] = sym_case_item;
	v->a[80061] = state(2293);
	v->a[80062] = 1;
	v->a[80063] = sym__case_item_last;
	v->a[80064] = state(2224);
	v->a[80065] = 2;
	v->a[80066] = sym_concatenation;
	v->a[80067] = sym__extglob_blob;
	v->a[80068] = actions(1955);
	v->a[80069] = 3;
	v->a[80070] = sym_raw_string;
	v->a[80071] = sym_number;
	v->a[80072] = sym_word;
	v->a[80073] = state(2157);
	v->a[80074] = 5;
	v->a[80075] = sym_arithmetic_expansion;
	v->a[80076] = sym_string;
	v->a[80077] = sym_simple_expansion;
	v->a[80078] = sym_expansion;
	v->a[80079] = sym_command_substitution;
	small_parse_table_4004(v);
}

void	small_parse_table_4004(t_small_parse_table_array *v)
{
	v->a[80080] = 15;
	v->a[80081] = actions(3);
	v->a[80082] = 1;
	v->a[80083] = sym_comment;
	v->a[80084] = actions(1959);
	v->a[80085] = 1;
	v->a[80086] = anon_sym_LPAREN;
	v->a[80087] = actions(1963);
	v->a[80088] = 1;
	v->a[80089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80090] = actions(1965);
	v->a[80091] = 1;
	v->a[80092] = anon_sym_DOLLAR;
	v->a[80093] = actions(1967);
	v->a[80094] = 1;
	v->a[80095] = anon_sym_DQUOTE;
	v->a[80096] = actions(1969);
	v->a[80097] = 1;
	v->a[80098] = anon_sym_DOLLAR_LBRACE;
	v->a[80099] = actions(1971);
	small_parse_table_4005(v);
}

/* EOF small_parse_table_800.c */
